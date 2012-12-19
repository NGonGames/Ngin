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

class NGin::Window {
public:
    Window();
    virtual ~Window();
    
    SDL_Surface* getScreen();
    
    static const NGin::Window* Get() { return m_window; };
    
private:
    Window(const NGin::Window& orig);
    
    SDL_Surface *m_screen;
    
    static NGin::Window *m_window = NULL;
};

#endif	/* NGINWINDOW_H */

