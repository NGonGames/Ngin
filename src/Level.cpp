/* 
 * File:   GameLevel.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 13, 2013, 2:10 PM
 */

#include "NGin/NGin.hpp"
#include "rapidxml/rapidxml.hpp"

using namespace NGin;
using namespace NGin::Game;
using namespace NGin::Resource;
using namespace std;

Level::Level(RenderContext *graphics, Input* input, Manager *resources, string level) {
    gfx = graphics;
    in = input;
    rmgr = resources;
    data = rmgr->GetScene(level);
    Add(new TileMap(this));
}

Level::Level(const Level& orig) {
}

Level::~Level() {
}

void Level::Add(Object *g) {
    gObjects.push_back(g);
}

void Level::Update() {
    for (auto obj : gObjects) {
        obj->Update();
    }
}

void Level::Render() {
    for (auto obj : gObjects) {
        obj->Render();
    }
}