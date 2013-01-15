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
    Image(NGin::Texture* texture);
    Image(NGin::Texture* texture, NGin::Vector2 *origin, NGin::Vector2 *size);
    Image(const NGin::Image& orig);
    virtual ~Image();
    void Render(int x, int y);
    std::string Name() { return mName; };
private:
    NGin::Vector2 *mOrigin;
    NGin::Vector2 *mSize;
    NGin::Texture *mTex;
    std::string mName;
};

