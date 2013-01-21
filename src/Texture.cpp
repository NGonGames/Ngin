/* 
 * File:   Texture.cpp
 * Author: Ben Cochrane
 * 
 * Created on December 21, 2012, 10:31 AM
 */

#include "NGin/NGin.hpp"

using namespace NGin;
using namespace NGin::Resource;
using namespace std;

Texture::Texture(string nameID, SDL_Surface* surface) {
    mName = nameID;
    mSurf = surface;
}

Texture::~Texture() {
}

