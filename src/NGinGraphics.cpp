/* 
 * File:   NGinGraphics.cpp
 * Author: bcochrane
 * 
 * Created on December 14, 2012, 11:12 AM
 */

#include "NGinGraphics.h"

NGinGraphics::NGinGraphics() {
}

NGinGraphics::NGinGraphics(const NGinGraphics& orig) {
}

NGinGraphics::~NGinGraphics() {
}

void NGinGraphics::drawImage(std::string name, int x, int y) {
    SDL_Surface *img = m_resource->getImage(name);
    SDL_Rect offset;
    offset.x = x;
    offset.y = y;
    SDL_BlitSurface(img, NULL, m_window->getScreen(), &offset);
    SDL_Flip(m_window->getScreen());
}

void NGinGraphics::linkNGinWindow(NGinWindow *window) {
    m_window = window;
}

void NGinGraphics::linkNGinResourceManager(NGinResourceManager *resources) {
    m_resource = resources;
}