/* 
 * File:   NGinWindow.cpp
 * Author: Ben Cochrane
 * 
 * Created on December 13, 2012, 2:12 PM
 */

#include "NGin/NGin.hpp"

using namespace NGin;

Window::Window() {
    mScreen = SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE);
}

Window::Window(const Window& orig) {
}

Window::~Window() {
}

SDL_Surface* Window::GetScreen() {
    return mScreen;
}

void Window::SetWindowTitle(const std::string title) {
    SDL_WM_SetCaption(title.c_str(), NULL);
}