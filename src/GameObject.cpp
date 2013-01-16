/* 
 * File:   GameObject.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 13, 2013, 3:05 PM
 */

#include "NGin/NGin.hpp"

using namespace NGin;

GameObject::GameObject(GameLevel *gameLevel) {
    gl = gameLevel;
    gfx = gl->gfx;
    in = gl->in;
}

GameObject::GameObject(const GameObject& orig) {
}

GameObject::~GameObject() {
}

void GameObject::Update() {
    if (!mAnims.empty()) {
        mAnims.at(0)->Update();
    }
}

void GameObject::Render() {
    if (!mAnims.empty()) {
        mAnims.at(0)->Render(gl->gfx, mPos);
    }
}