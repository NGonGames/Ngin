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

bool Rectangle::IntersectsRectangle(const Rectangle &rect) {
    
    if (IntersectsPoint(Vector2(rect.x, rect.y)) ||
        IntersectsPoint(Vector2(rect.x + rect.w, rect.y)) ||
        IntersectsPoint(Vector2(rect.x, rect.y + rect.h)) ||
        IntersectsPoint(Vector2(rect.x + rect.w, rect.y + rect.h))) {
        return true;
    }
    
    if (rect.x > x && x + w > rect.x) { // left side of rect *could be intersecting
        if (rect.y > y && rect.y + rect.h > y + h) {
            return true;
        }
    }
    
    if (rect.x + rect.w > x && rect.x + rect.w < x + w) { // check right side of rect
        if (rect.y > y && rect.y + rect.h > y + h) {
            return true;
        }
    }
    
    if (rect.y > y && y + h > rect.y) { // top side of rect
        if (rect.x > x && rect.x + rect.w > x + w) {
            return true;
        }
    }
    
    if (rect.y + rect.h > y && rect.y + rect.h < y + h) { // bottom side of rect
        if (rect.x > x && rect.x + rect.w > x + w) {
            return true;
        }
    }
    
    return false;
}

bool Rectangle::IntersectsPoint(const Vector2& p) {
    if (p.x >= x && p.x <= x + w) {
        if (p.y >= y && p.y <= y + h) {
            return true;
        }
    }
    return false;
}