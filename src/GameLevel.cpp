/* 
 * File:   GameLevel.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 13, 2013, 2:10 PM
 */

#include "NGin/NGin.h"
#include "rapidxml/rapidxml.hpp"

using namespace NGin;

GameLevel::GameLevel(NGin::Graphics *graphics) {
    gfx = graphics;
    gObjects.push_back(new GameObject(gfx));
    gObjects.push_back(new GameObject(gfx));
}

GameLevel::GameLevel(const GameLevel& orig) {
}

GameLevel::~GameLevel() {
}

void GameLevel::Update() {
    for (std::vector<GameObject*>::iterator i = gObjects.begin(), e = gObjects.end(); i != e; i++) {
        (*i)->Update();
    }
}

void GameLevel::Render() {
    for (std::vector<GameObject*>::iterator i = gObjects.begin(), e = gObjects.end(); i != e; i++) {
        (*i)->Render();
    }
}