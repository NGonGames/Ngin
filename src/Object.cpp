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
}

Object::Object(const Object& orig) {
}

Object::~Object() {
}

Math::Vector2* Object::GetPosition() {
    return mPos;
}