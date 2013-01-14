/* 
 * File:   Sprite.cpp
 * Author: Ben Cochrane
 * 
 * Created on December 21, 2012, 10:31 AM
 */

#include "NGin/Texture.h"

using namespace NGin;

Texture::Texture(std::string name, SDL_Surface* surface)
        : mName(name), mSurf(surface) {
}

Texture::~Texture() {
}
