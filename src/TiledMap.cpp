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
using namespace rapidxml;
using namespace std;

struct Tileset {
    int begin;
    int w, h;
    int tw, th;
    int end() { return w * h / (tw * th) + begin; };
    bool included(int n) { return (n >= begin && n <= end()); };
    string name;
};

TiledMap::TiledMap(GameLevel* gameLevel) : GameObject(gameLevel) {
    xml_document<> doc;
    string::iterator xmlst, xmlen;
    xmlst = gl->data->data()->begin();
    xmlen = gl->data->data()->end();
    vector<char> xml_copy(xmlst, xmlen);
    xml_copy.push_back('\0');
    doc.parse<0>(&xml_copy[0]);
    xml_node<>* map_node = doc.first_node("map");
    xml_node<>* cur_node = map_node;
    int gridwidth, gridheight;
    istringstream(cur_node->first_attribute("width")->value()) >> gridwidth;
    istringstream(cur_node->first_attribute("height")->value()) >> gridheight;
    Tileset t[64];
    int tnum = 0;
    if (cur_node->first_node("tileset") != 0) {
        cur_node = cur_node->first_node("tileset");
        int i = 0;
        do {
            istringstream(cur_node->first_attribute("firstgid")->value()) >> t[i].begin;
            istringstream(cur_node->first_node("image")->first_attribute("width")->value()) >> t[i].w;
            istringstream(cur_node->first_node("image")->first_attribute("height")->value()) >> t[i].h;
            istringstream(cur_node->first_node("image")->first_attribute("tilewidth")->value()) >> t[i].tw;
            istringstream(cur_node->first_node("image")->first_attribute("tileheight")->value()) >> t[i].th;
            t[i].name = cur_node->first_node("image")->first_attribute("source")->value();
            ++i;
            cur_node = cur_node->next_sibling("tileset");
        } while (cur_node->next_sibling("tileset") != 0 && i < 64);
        tnum = 0;
    }
    if (cur_node->first_node("layer") != 0) {   // start searching layers
        cur_node = map_node->first_node("layer");       // get first layer
        int i = 0;      // layer index
        xml_node<>* tile_node = cur_node->first_node("data")->first_node("tile");       // current tile pointer
        if (tile_node == 0) {   // no tiles!?!?
            do {        // loop through layers
                int j = 0;      // tile counter
                tile_node = cur_node->first_node("data")->first_node("tile");   // update tile pointer
                do {    // loop through tiles
                    int gid;    // get tile global id
                    istringstream(tile_node->first_attribute("gid")->value()) >> gid;   // retrieve global id
                    for (int k = 0; k < tnum; ++k) {    // loop through tilesets
                        if (t[k].included(gid)) {       // is gid in tileset?
                            mTiles.push_back(
                                        new TiledTile(gameLevel,        // game level
                                        new Vector2(j % gridwidth * t[k].tw, floor(j / gridwidth) * t[k].th),       // position (world coords)
                                        new Vector2((gid - t[k].begin) % gridwidth, floor((gid - t[k].begin) / gridheight)),    // index to tile if tileset were 2d array
                                        new Vector2(t[k].tw, t[k].th)));        // tile dimensions
                        }
                    }
                    ++j;
                } while (tile_node->next_sibling("tile") != 0);
                ++i;
            } while (cur_node->next_sibling("layer") != 0);
        }
    }
}

TiledMap::~TiledMap() {
}

string TiledMap::TrimFileName(string path) {
    return path.substr(path.find_last_of('/') + 1, path.find_last_of('.') - 1);
}