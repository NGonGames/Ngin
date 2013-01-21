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

namespace NGin {
    
    namespace Resource {

        class Texture : public Resource {
        public:
            Texture(std::string nameID, SDL_Surface *surface);
            virtual ~Texture();

            SDL_Surface * surface() { return mSurf; };
            Math::Vector2 Size() { return Math::Vector2(mSurf->w, mSurf->h); };

        private:
            Texture(const Texture& orig);

            SDL_Surface *mSurf;
        };

    };

};