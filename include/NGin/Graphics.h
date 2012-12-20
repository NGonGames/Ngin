/* 
 * File:   NGinGraphics.h
 * Author: bcochrane
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
    Graphics();
    virtual ~Graphics();
    
    void drawImage(std::string, int x, int y);
    
    static NGin::Graphics* Get() { return NGin::Graphics::m_graphics; };
    
private:
    Graphics(const NGin::Graphics& orig);
    
    static NGin::Graphics *m_graphics;
};

#endif	/* NGINGRAPHICS_H */