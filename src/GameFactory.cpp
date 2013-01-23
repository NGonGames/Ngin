/* 
 * File:   GameFactory.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 9, 2013, 4:53 PM
 */

#include "NGin/NGin.hpp"

using namespace NGin;
using namespace NGin::Game;
using namespace NGin::Math;
using namespace NGin::Resource;

Application *GameFactory::mApp = 0;
AudioContext *GameFactory::mAudio = 0;
Input *GameFactory::mInput = 0;
Manager *GameFactory::mResource = 0;
RenderContext *GameFactory::mRender = 0;
Window *GameFactory::mWindow = 0;

GameFactory::GameFactory() {
}

GameFactory::GameFactory(const GameFactory& orig) {
}

GameFactory::~GameFactory() {
}

Application* GameFactory::CreateGame() {
    mResource = new Manager;
    mWindow = new Window;
    mRender = new RenderContext(mWindow);
    mInput = new Input();
    mApp = new Application(mRender, mResource, mWindow, mInput);
    return mApp;
}

Image* GameFactory::CreateImage(const std::string &texID) {
    return new Image(mRender, mResource->GetTexture(texID));
}

Image* GameFactory::CreateImage(const std::string &texID, const Vector2 &origin, const Vector2 &size) {
    return new Image(mRender, mResource->GetTexture(texID), new Vector2(origin), new Vector2(size));
}

BitmapMask* GameFactory::CreateBitmapMask(Game::Object& obj, const std::string& texID) {
    BitmapMask *bm = new BitmapMask(&obj);
    SDL_Surface *surf = mResource->GetTexture(texID)->surface();
    SDL_PixelFormat *f;
    SDL_LockSurface(surf);
    bm->map = new Vector2(surf->w, surf->h);
    int bitsize = bm->map->x * bm->map->y;
    bm->bits = new bool[bitsize];
    bool *b = bm->bits;
    f = surf->format;
    Uint32 *px = (Uint32*)surf->pixels;
    Uint8 a;
    for (int i = 0; i < bm->map->x * bm->map->y; ++i) {
        a = (*px)&f->Amask;
        a >>= f->Ashift;
        a <<= f->Aloss;
        *b = a > 128;
        ++b;
        ++px;
    }
    SDL_UnlockSurface(surf);
}

BitmapMask* GameFactory::CreateBitmapMask(Game::Object& obj, const Game::Image*& img) {
    
}

BitmapMask* GameFactory::CreateBitmapMask(Game::Object& obj, const std::string& texID, const Math::Vector2& orig, const Math::Vector2& size) {
    
}

RectMask* GameFactory::CreateRectMask(Game::Object& obj, const Math::Vector2& size) {
    
}

RectMask* GameFactory::CreateRectMask(Game::Object& obj, const Math::Rectangle& rect) {
    
}

RectMask* GameFactory::CreateRectMask(Game::Object& obj, const int w, const int h) {
    
}

RectMask* GameFactory::CreateRectmask(Game::Object& obj, const float w, const float h) {
    
}
