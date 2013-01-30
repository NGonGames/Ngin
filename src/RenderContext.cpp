/* 
 * File:   Graphics.cpp
 * Author: Ben Cochrane
 * 
 * Created on December 14, 2012, 11:12 AM
 */

#include "NGin/NGin.hpp"

using namespace NGin;
using namespace NGin::Resource;
using namespace NGin::Math;

RenderContext::RenderContext(Window *window) {
    mWindow = window;
    mOffset = new Vector2(0, 0);
}

RenderContext::RenderContext(const RenderContext& orig) {
}

RenderContext::~RenderContext() {
}

void RenderContext::Clear() {
    SDL_FillRect(mWindow->GetScreen(), &(mWindow->GetScreen()->clip_rect), SDL_MapRGB(mWindow->GetScreen()->format, 0x0, 0x0, 0x0));
}

void RenderContext::Clear(int r, int g, int b) {
    SDL_FillRect(mWindow->GetScreen(), &mWindow->GetScreen()->clip_rect, SDL_MapRGB(mWindow->GetScreen()->format, r, g, b));
}

void RenderContext::SetOffset(const Math::Vector2& offset) {
    mOffset->x = offset.x;
    mOffset->y = offset.y;
}

void RenderContext::DrawTexture(const Texture &texture, const Vector2 &pos) {
    SDL_Rect offset;
    offset.x = pos.x - mOffset->x;
    offset.y = pos.y - mOffset->y;
    SDL_BlitSurface(texture.surface(), NULL, mWindow->GetScreen(), &offset);
}

void RenderContext::DrawTexture(const Texture &texture, const Vector2 &pos, const Vector2 &clipPos, const Vector2 &clipSize) {
    SDL_Rect offset, clip;
    offset.x = pos.x - mOffset->x;
    offset.y = pos.y - mOffset->y;
    clip.x = clipPos.x;
    clip.y = clipPos.y;
    clip.w = clipSize.x;
    clip.h = clipSize.y;
    SDL_BlitSurface(texture.surface(), &clip, mWindow->GetScreen(), &offset);
}

void RenderContext::Finalize() {
    SDL_Flip(mWindow->GetScreen());
}