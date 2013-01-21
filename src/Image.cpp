/* 
 * File:   Image.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 14, 2013, 2:14 PM
 */

#include "NGin/NGin.hpp"

using namespace NGin;
using namespace NGin::Game;
using namespace NGin::Resource;
using namespace NGin::Math;

Image::Image(RenderContext *rc, Texture *texture) {
    mRender = rc;
    mTex = texture;
    mClipPos = new Vector2(0.f, 0.f);
    mClipSize = new Vector2(0.f, 0.f);
}

Image::Image(RenderContext *rc, Texture *texture, Vector2 *clipCoord, Vector2 *clipSize) {
    mRender = rc;
    mTex = texture;
    mClipPos = clipCoord;
    mClipSize = clipSize;
}

Image::Image(const Image& orig) {
}

Image::~Image() {
}

void Image::Update() {
    
}

void Image::Render(const Vector2 &position) {
    if (mClipSize->magnitude() < 1) {
        mRender->DrawTexture(*mTex, position);
    } else {
        mRender->DrawTexture(*mTex, position, *mClipPos, *mClipSize);
    }
}
