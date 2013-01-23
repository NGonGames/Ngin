/* 
 * File:   PolyMask.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 21, 2013, 8:59 AM
 */

#include "NGin/NGin.hpp"

using namespace NGin::Game;

PolyMask::PolyMask() {
}

PolyMask::PolyMask(const PolyMask& orig) {
}

PolyMask::~PolyMask() {
}

bool PolyMask::Collides(const Mask &m) {
    if (dynamic_cast<RectMask*>(&m) !=  NULL) {
        return CollidesRectMask(dynamic_cast<RectMask>(m));
    } else if (dynamic_cast<BitmapMask*>(&m)) {
        return CollidesBitmapMask(dynamic_cast<BitmapMask>(m));
    } else if (dynamic_cast<PolyMask*>(&m)) {
        return CollidesPolyMask(dynamic_cast<PolyMask>(m));
    }
    return false;
}

bool PolyMask::CollidesRectMask(const RectMask &m) {
    return false;
}

bool PolyMask::CollidesBitmapMask(const BitmapMask &m) {
    return false;
}

bool PolyMask::CollidesPolyMask(const PolyMask &m) {
    return false;
}