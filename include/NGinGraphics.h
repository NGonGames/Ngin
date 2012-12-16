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

class NGinGraphics {
public:
    NGinGraphics();
    NGinGraphics(const NGinGraphics& orig);
    virtual ~NGinGraphics();
    
    void drawImage(std::string, int x, int y);
    
    void linkNGinWindow(NGinWindow *window);
    void linkNGinResourceManager(NGinResourceManager *resources);
private:
    NGinWindow *m_window;
    NGinResourceManager *m_resource;
};

#endif	/* NGINGRAPHICS_H */