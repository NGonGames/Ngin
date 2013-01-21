/* 
 * File:   Vector4.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 21, 2013, 12:28 PM
 */

#include "NGin/NGin.hpp"

using namespace NGin::Math;

Vector4::~Vector4() {}

Vector4::Vector4() {
    w = 0.f;
    x = 0.f;
    y = 0.f;
    z = 0.f;
}

Vector4::Vector4(const Vector4& orig) {
    w = orig.w;
    x = orig.x;
    y = orig.y;
    z = orig.z;
}

Vector4::Vector4(int w, int x, int y, int z) {
    Vector4::w = w;
    Vector4::x = x;
    Vector4::y = y;
    Vector4::z = z;
}

Vector4::Vector4(float w, float x, float y, float z) {
    Vector4::w = w;
    Vector4::x = x;
    Vector4::y = y;
    Vector4::z = z;
}

Vector4 Vector4::operator+ (const Vector4 &param) const {
    Vector4 v4;
    v4.w = w + param.w;
    v4.x = x + param.x;
    v4.y = y + param.y;
    v4.z = z + param.z;
    return v4;
}

Vector4 Vector4::operator+= (const Vector4 &param) {
    Vector4 v4;
    v4.w = w + param.w;
    v4.x = x + param.x;
    v4.y = y + param.y;
    v4.z = z + param.z;
    return v4;
}

float Vector4::operator* (const Vector4 &param) const {
    return x * param.x + y * param.y + z * param.z + w * param.w;
}

Vector4 Vector4::operator* (const float &param) const {
    return Vector4(w * param, x * param, y * param, z * param);
}

Vector4 Vector4::operator* (const int &param) const {
    return Vector4(w * param, x * param, y * param, z * param);
}

void Vector4::normalize() {
    w /= magnitude();
    x /= magnitude();
    y /= magnitude();
    z /= magnitude();
}

Vector4 Vector4::normalized() {
    Vector4 v4(*this);
    v4.normalize();
    return v4;
}

float Vector4::magnitude() {
    return (sqrt(w * w + x * x + y * y + z * z));
}