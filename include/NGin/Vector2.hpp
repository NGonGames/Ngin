/* 
 * File:   Vector2.hpp
 * Author: Ben Cochrane
 *
 * Created on January 14, 2013, 2:33 PM
 */

#pragma once

#include "NGin/NGin.hpp"

class NGin::Vector2 {
public:
    Vector2();
    Vector2(const NGin::Vector2& orig);
    Vector2(int x, int y);
    Vector2(float x, float y);
    ~Vector2();
    float x() { return mx; };
    float y() { return my; };
    NGin::Vector2 operator+(const NGin::Vector2& param);
private:
    float mx, my;
};