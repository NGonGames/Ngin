/* 
 * File:   Image.h
 * Author: Ben Cochrane
 *
 * Created on January 14, 2013, 2:14 PM
 */

#pragma once

#include "NGin/NGin.hpp"

class NGin::Image {
public:
    Image();
    Image(const NGin::Image& orig);
    virtual ~Image();
private:
    NGin::Texture *tex;
};

