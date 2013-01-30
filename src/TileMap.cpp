/* 
 * File:   TiledMap.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 15, 2013, 4:30 PM
 */

#include "NGin/NGin.hpp"
#include "rapidxml/rapidxml.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>

using namespace NGin;
using namespace NGin::Game;
using namespace NGin::Math;
using namespace rapidxml;
using namespace std;

struct Tileset {
    int begin;
    int w, h;
    int tw, th;
    int gw, gh;

    int end() {
        return w * h / (tw * th) + begin;
    };

    bool included(int n) {
        return (n >= begin && n <= end());
    };
    
    int id(int gid) {
        return gid - begin;
    }
    string name;
};

TileMap::TileMap(Level* level) : Object(level) {
    xml_document<> doc;
    
    string *data = gl->data->data();
    data = new string(data->substr(0, data->find_last_of(">") + 1));
    
    vector<char> xml_copy(data->begin(), data->end());
    xml_copy.push_back('\0');
    
    doc.parse < 0 > (&xml_copy[0]);
    
    xml_node<>* map_node = doc.first_node("map");
    xml_node<>* cur_node = map_node;
    
    int gridwidth, gridheight;
    istringstream(cur_node->first_attribute("width")->value()) >> gridwidth;
    istringstream(cur_node->first_attribute("height")->value()) >> gridheight;
    
    Tileset t[64];
    int tsnum = 0;
    int lnum = 0;
    int tnum = 0;
    
    for (xml_node<> *child = cur_node->first_node("tileset"); child; ++tsnum, child = child->next_sibling("tileset")) {
        istringstream(child->first_attribute("firstgid")->value()) >> t[tsnum].begin;
        istringstream(child->first_node("image")->first_attribute("width")->value()) >> t[tsnum].w;
        istringstream(child->first_node("image")->first_attribute("height")->value()) >> t[tsnum].h;
        istringstream(child->first_attribute("tilewidth")->value()) >> t[tsnum].tw;
        istringstream(child->first_attribute("tileheight")->value()) >> t[tsnum].th;
        t[tsnum].name = TrimFileName(child->first_node("image")->first_attribute("source")->value());
        t[tsnum].gw = t[tsnum].w / t[tsnum].tw;
        t[tsnum].gh = t[tsnum].h / t[tsnum].th;
    }
    
    for (xml_node<> *child = cur_node->first_node("layer"); child; ++lnum, child = child->next_sibling("layer")) {
        vector<Tile*> *mTiles = new vector<Tile*>();
        tnum = 0;
        for (xml_node<> *tile = child->first_node("data")->first_node("tile"); tile; ++tnum, tile = tile->next_sibling("tile")) {
            int gid;
            istringstream(tile->first_attribute("gid")->value()) >> gid;
            for (int i = 0; i < tsnum; ++i) {
                if (t[i].included(gid) && gid != 0) {
                    mTiles->push_back(
                            new Tile(level,
                            t[i].name,
                            new Vector2(tnum % gridwidth * t[i].tw, floor(tnum / gridwidth) * t[i].th),
                            new Vector2(t[i].id(gid) % t[i].gw * t[i].tw, floor(t[i].id(gid) / t[i].gw) * t[i].th),
                            new Vector2(t[i].tw, t[i].th)));
                }
            }
        }
        mLayers.push_back(mTiles);
    }
}

TileMap::~TileMap() {
}

string TileMap::TrimFileName(string path) {
    return path.substr(path.find_last_of('/') + 1, path.find_last_of('.') - path.find_last_of('/') - 1);
}

void TileMap::Update() {
    
}

void TileMap::Render() {
    for (auto layer : mLayers) {
        for (auto tile : *layer) {
            tile->Render();
        }
    }
}

Mask* TileMap::GetMask() {
    return NULL;
}