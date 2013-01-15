/* 
 * File:   Image.hpp
 * Author: Ben Cochrane
 *
 * Created on January 14, 2013, 2:14 PM
 */

#pragma once

#include "NGin/NGin.hpp"

class NGin::Image {
public:
    Image();
    Image(NGin::Vector2 origin, NGin::Vector2 size);
    Image(const NGin::Image& orig);
    virtual ~Image();
private:
    NGin::Vector2 *mOrigin;
    NGin::Vector2 *mSize;
    NGin::Texture *tex;
};

