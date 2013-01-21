/* 
 * File:   Vector3.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 21, 2013, 11:09 AM
 */

#include "NGin/NGin.hpp"

using namespace NGin::Math;

Vector3::~Vector3() {}

Vector3::Vector3() {
    x = 0.f;
    y = 0.f;
    z = 0.f;
}

Vector3::Vector3(const Vector3& orig) {
    x = orig.x;
    y = orig.y;
    z = orig.z;
}

Vector3::Vector3(int x, int y, int z) {
    Vector3::x = x;
    Vector3::y = y;
    Vector3::z = z;
}

Vector3::Vector3(float x, float y, float z) {
    Vector3::x = x;
    Vector3::y = y;
    Vector3::z = z;
}

Vector3 Vector3::operator+ (const Vector3 &param) const {
    Vector3 v3;
    v3.x = x + param.x;
    v3.y = y + param.y;
    v3.z = z + param.z;
    return v3;
}

Vector3 Vector3::operator+= (const Vector3 &param) {
    Vector3 v3;
    v3.x = x + param.x;
    v3.y = y + param.y;
    v3.z = z + param.z;
    return v3;
}

float Vector3::operator* (const Vector3 &param) const {
    return x * param.x + y * param.y + z * param.z;
}

Vector3 Vector3::operator* (const float &param) const {
    return Vector3(x * param, y * param, z * param);
}

Vector3 Vector3::operator* (const int &param) const {
    return Vector3(x * param, y * param, z * param);
}

void Vector3::normalize() {
    x /= magnitude();
    y /= magnitude();
    z /= magnitude();
}

Vector3 Vector3::normalized() {
    Vector3 v3(*this);
    v3.normalize();
    return v3;
}

float Vector3::magnitude() {
    return (sqrt(x * x + y * y + z * z));
}