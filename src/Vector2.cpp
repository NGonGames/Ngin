
#include "NGin/NGin.hpp"
#include <cmath>

using namespace NGin;

Vector2::Vector2() {
    x = 0;
    y = 0;
}

Vector2::Vector2(const Vector2& orig) {
    x = orig.x;
    y = orig.y;
}

Vector2::Vector2(int x, int y) {
    x = x;
    y = y;
}

Vector2::Vector2(float x, float y) {
    x = x;
    y = y;
}

Vector2 Vector2::operator+ (const Vector2& param) const {
    Vector2 v2;
    v2.x = x + param.x;
    v2.y = y + param.y;
    return v2;
}

Vector2 Vector2::operator= (const Vector2& param) {
    x = param.x;
    y = param.y;
}

Vector2 Vector2::operator* (const int param) const {
    return Vector2(x * param, y * param);
}

Vector2 Vector2::operator* (const float param) const {
    return Vector2(x * param, y * param);
}

float Vector2::operator*(const NGin::Vector2& param) const {
    return x * param.y + y * param.x;
}

void Vector2::normalize() {
    x /= magnitude();
    y /= magnitude();
}

Vector2 Vector2::normalized() {
    Vector2 v2(*this);
    v2.normalize();
    return (v2);
}

float Vector2::magnitude() {
    return sqrt(x * x + y * y);
}