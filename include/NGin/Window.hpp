/* 
 * File:   NGinWindow.h
 * Author: Ben Cochrane
 *
 * Created on December 13, 2012, 2:12 PM
 */

#pragma once

#include <SDL/SDL.h>
#include "NGin/NGin.hpp"

class NGin::Window {
public:
    Window();
    virtual ~Window();
    SDL_Surface* GetScreen();
    void SetWindowTitle(std::string);
    
private:
    Window(const NGin::Window& orig);
    SDL_Surface *mScreen;
};

