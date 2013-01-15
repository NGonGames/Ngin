/* 
 * File:   Image.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 14, 2013, 2:14 PM
 */

#include "NGin/NGin.hpp"

using namespace NGin;

Image::Image(Texture* texture) {
    mTex = texture;
    mOrigin = new Vector2(0.f, 0.f);
    mSize = new Vector2(0.f, 0.f);
}

Image::Image(Texture *texture, Vector2 *origin, Vector2 *size) {
    mTex = texture;
    mOrigin = origin;
    mSize = size;
}

Image::Image(const Image& orig) {
}

Image::~Image() {
}

void Image::Render(int x, int y) {
    
}
