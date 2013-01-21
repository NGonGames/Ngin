/* 
 * File:   Rectangle.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 21, 2013, 1:04 PM
 */

#include "NGin/NGin.hpp"

using namespace NGin::Math;

Rectangle::~Rectangle() {}

Rectangle::Rectangle() {
    x = 0.f;
    y = 0.f;
    w = 0.f;
    h = 0.f;
}

Rectangle::Rectangle(const Rectangle& orig) {
    x = orig.x;
    y = orig.y;
    w = orig.w;
    h = orig.h;
}

Rectangle::Rectangle(float x, float y, float w, float h) {
    Rectangle::x = x;
    Rectangle::y = y;
    Rectangle::w = w;
    Rectangle::h = h;
}

Rectangle::Rectangle(int x, int y, int w, int h) {
    Rectangle::x = x;
    Rectangle::y = y;
    Rectangle::w = w;
    Rectangle::h = h;
}

float Rectangle::Area() {
    return w * h;
}