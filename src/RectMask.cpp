/* 
 * File:   RectMask.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 22, 2013, 9:08 AM
 */

#include "NGin/NGin.hpp"

using namespace NGin;
using namespace NGin::Game;

RectMask::RectMask() {
}

RectMask::RectMask(const RectMask& orig) {
}

RectMask::~RectMask() {
}

bool RectMask::Collides(const Mask &m) {
    return false;
}

bool RectMask::CollidesRectMask(const RectMask &m) {
    return false;
}

bool RectMask::CollidesBitmapMask(const BitmapMask &m) {
    return false;
}

bool RectMask::CollidesPolyMask(const PolyMask &m) {
    return false;
}