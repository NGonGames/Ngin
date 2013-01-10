/* 
 * File:   NGinWindow.cpp
 * Author: Ben Cochrane
 * 
 * Created on December 13, 2012, 2:12 PM
 */

#include "NGin/NGin.h"

using namespace NGin;

Window::Window() {
    mScreen = SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE);
}

Window::Window(const Window& orig) {
}

Window::~Window() {
}

SDL_Surface* Window::getScreen() {
    return mScreen;
}

void Window::setWindowTitle(const std::string title) {
    SDL_WM_SetCaption(title.c_str(), NULL);
}