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
    NGin::Vector2 operator+(const NGin::Vector2& param) const;
    NGin::Vector2 operator+=(const NGin::Vector2& param);
    NGin::Vector2 operator=(const NGin::Vector2& param);
    NGin::Vector2 operator*(const int param) const;
    NGin::Vector2 operator*(const float param) const;
    float operator*(const NGin::Vector2& param) const;
    
    void normalize();
    NGin::Vector2 normalized();
    float magnitude();
    
    float x;
    float y;
};