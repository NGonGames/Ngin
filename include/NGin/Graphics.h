/* 
 * File:   NGinGraphics.h
 * Author: Ben Cochrane
 *
 * Created on December 14, 2012, 11:12 AM
 */

#ifndef NGINGRAPHICS_H
#define	NGINGRAPHICS_H

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <string>
#include "NGin.h" 

class NGin::Graphics {
public:
    static void DrawImage(std::string, int x, int y);
    
private:
    Graphics();
    virtual ~Graphics();
    Graphics(const NGin::Graphics& orig);
    
};

#endif	/* NGINGRAPHICS_H */