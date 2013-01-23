/* 
 * File:   BitmapMask.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 21, 2013, 9:22 AM
 */

#include "NGin/NGin.hpp"

using namespace NGin;
using namespace NGin::Game;

BitmapMask::BitmapMask() {
}

BitmapMask::BitmapMask(const BitmapMask& orig) {
}

BitmapMask::~BitmapMask() {
}

bool BitmapMask::Collides(const Mask &m) {
    return false;
}

bool BitmapMask::CollidesRectMask(const RectMask &m) {
    return false;
}

bool BitmapMask::CollidesBitmapMask(const BitmapMask &m) {
    return false;
}

bool BitmapMask::CollidesPolyMask(const PolyMask &m) {
    return false;
}