/* 
 * File:   Sprite.h
 * Author: Ben Cochrane
 *
 * Created on December 21, 2012, 10:31 AM
 */

#ifndef NGINSPRITE_H
#define	NGINSPRITE_H

#include "NGin/NGin.h"
#include "SDL/SDL.h"
#include <string>

class NGin::Sprite {
public:
    Sprite(std::string name, SDL_Surface *surface);
    Sprite(const NGin::Sprite& orig);
    virtual ~Sprite();
    
    inline std::string name() { return mName; };
    inline SDL_Surface * surface() { return mSurf; };
    
private:
    
    SDL_Surface *mSurf;
    std::string mName;
};

#endif	/* NGINSPRITE_H */

