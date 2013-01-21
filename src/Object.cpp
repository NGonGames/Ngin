/* 
 * File:   GameObject.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 13, 2013, 3:05 PM
 */

#include "NGin/NGin.hpp"

using namespace NGin;
using namespace NGin::Game;

Object::Object(Level *level) {
    gl = level;
    gfx = gl->gfx;
    in = gl->in;
}

Object::Object(const Object& orig) {
}

Object::~Object() {
}

void Object::Update() {
    
}

void Object::Render() {
    
}

void Object::UpdateAnimation() {
    if (!mAnims.empty()) {
        mAnims.at(0)->Update();
    }
}

void Object::RenderAnimation() {
    if (!mAnims.empty()) {
        mAnims.at(0)->Render(gl->gfx, mPos);
    }
}