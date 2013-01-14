/* 
 * File:   Sprite.h
 * Author: Ben Cochrane
 *
 * Created on December 21, 2012, 10:31 AM
 */

#pragma once

#include "NGin/NGin.hpp"
#include "SDL/SDL.h"
#include <string>

class NGin::Texture : public NGin::Resource {
public:
    Texture(std::string nameID, SDL_Surface *surface);
    virtual ~Texture();
    
    SDL_Surface * surface() { return mSurf; };
    
private:
    Texture(const NGin::Texture& orig);
    
    SDL_Surface *mSurf;
};

