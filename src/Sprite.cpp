/* 
 * File:   Sprite.cpp
 * Author: bcochrane
 * 
 * Created on December 21, 2012, 10:31 AM
 */

#include "NGin/Sprite.h"

using namespace NGin;

Sprite::Sprite(std::string name, SDL_Surface* surface)
        : mName(name), mSurf(surface) {
}

Sprite::Sprite(const Sprite& orig) {
}

Sprite::~Sprite() {
}

