/* 
 * File:   NGinGraphics.cpp
 * Author: Ben Cochrane
 * 
 * Created on December 14, 2012, 11:12 AM
 */

#include "NGin/Graphics.h"

using namespace NGin;

Graphics::Graphics(ResourceManager *resources, Window *window) {
    rmgr = resources;
    wind = window;
}

Graphics::Graphics(const Graphics& orig) {
}

Graphics::~Graphics() {
}

void Graphics::DrawImage(std::string name, int x, int y) {
    SDL_Surface *img = rmgr->GetImage(name);
    SDL_Rect offset;
    offset.x = x;
    offset.y = y;
    SDL_BlitSurface(img, NULL, wind->getScreen(), &offset);
}