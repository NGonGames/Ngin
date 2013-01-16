/* 
 * File:   GameLevel.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 13, 2013, 2:10 PM
 */

#include "NGin/NGin.hpp"
#include "rapidxml/rapidxml.hpp"

using namespace NGin;

GameLevel::GameLevel(NGin::Graphics *graphics, NGin::ResourceManager *resources, std::string level) {
    gfx = graphics;
    rmgr = resources;
    data = rmgr->GetScene(level);
    Add(new TiledMap(this));
}

GameLevel::GameLevel(const GameLevel& orig) {
}

GameLevel::~GameLevel() {
}

void GameLevel::Add(GameObject *g) {
    gObjects.push_back(g);
}

void GameLevel::Update() {
    for (std::vector<GameObject*>::iterator i = gObjects.begin(), e = gObjects.end(); i != e; i++) {
        dynamic_cast<GameObject*>(*i)->Update();
    }
}

void GameLevel::Render() {
    for (std::vector<GameObject*>::iterator i = gObjects.begin(), e = gObjects.end(); i != e; i++) {
        dynamic_cast<GameObject*>(*i)->Render();
    }
}