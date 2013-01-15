/* 
 * File:   Image.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 14, 2013, 2:14 PM
 */

#include "NGin/NGin.hpp"

using namespace NGin;

Image::Image() {
    mOrigin = new Vector2(0.f, 0.f);
    mSize = new Vector2(0.f, 0.f);
}

Image::Image(Vector2 origin, Vector2 size) {
    mOrigin = origin;
    mSize = size;
}

Image::Image(const Image& orig) {
}

Image::~Image() {
}

