/* 
 * File:   NGinWindow.cpp
 * Author: Ben Cochrane
 * 
 * Created on December 13, 2012, 2:12 PM
 */

#include "NGinWindow.h"

NGinWindow::NGinWindow() {
    m_screen = SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE);
}

NGinWindow::NGinWindow(const NGinWindow& orig) {
}

NGinWindow::~NGinWindow() {
}

SDL_Surface* NGinWindow::getScreen() {
    return m_screen;
}

void NGinWindow::linkNGinGraphics(NGinGraphics* graphics) {
    m_graphics = graphics;
}

void NGinWindow::linkNGinResourceManager(NGinResourceManager* resources) {
    m_resource = resources;
}