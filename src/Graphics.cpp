/* 
 * File:   NGinGraphics.cpp
 * Author: Ben Cochrane
 * 
 * Created on December 14, 2012, 11:12 AM
 */

#include "NGin/Graphics.hpp"

using namespace NGin;

Graphics::Graphics(ResourceManager *resources, Window *window) {
    rmgr = resources;
    wind = window;
}

Graphics::Graphics(const Graphics& orig) {
}

Graphics::~Graphics() {
}

void Graphics::Clear() {
    SDL_FillRect(wind->getScreen(), &wind->getScreen()->clip_rect, SDL_MapRGB(wind->getScreen()->format, 0x0, 0x0, 0x0));
}

void Graphics::Clear(int r, int g, int b) {
    SDL_FillRect(wind->getScreen(), &wind->getScreen()->clip_rect, SDL_MapRGB(wind->getScreen()->format, r, g, b));
}

void Graphics::DrawImage(std::string name, int x, int y) {
    SDL_Surface *img = rmgr->GetImage(name)->surface();
    SDL_Rect offset;
    offset.x = x;
    offset.y = y;
    SDL_BlitSurface(img, NULL, wind->getScreen(), &offset);
}

void Graphics::Finalize() {
    SDL_Flip(wind->getScreen());
}