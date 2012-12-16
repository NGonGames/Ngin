/* 
 * File:   NGinWindow.h
 * Author: bcochrane
 *
 * Created on December 13, 2012, 2:12 PM
 */

#ifndef NGINWINDOW_H
#define	NGINWINDOW_H

#include <SDL/SDL.h>
#include "NGin.h"

class NGinWindow {
public:
    NGinWindow();
    NGinWindow(const NGinWindow& orig);
    virtual ~NGinWindow();
    
    SDL_Surface* getScreen();
    
    void linkNGinGraphics(NGinGraphics *graphics);
    void linkNGinResourceManager(NGinResourceManager *resources);
private:
    SDL_Surface *m_screen;
    NGinGraphics *m_graphics;
    NGinResourceManager *m_resource;
};

#endif	/* NGINWINDOW_H */

