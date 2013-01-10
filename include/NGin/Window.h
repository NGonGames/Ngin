/* 
 * File:   NGinWindow.h
 * Author: Ben Cochrane
 *
 * Created on December 13, 2012, 2:12 PM
 */

#ifndef NGINWINDOW_H
#define	NGINWINDOW_H

#include <SDL/SDL.h>
#include "NGin.h"

class NGin::Window {
public:
    Window();
    virtual ~Window();
    SDL_Surface* getScreen();
    
private:
    Window(const NGin::Window& orig);
    SDL_Surface *mScreen;
};

#endif	/* NGINWINDOW_H */

