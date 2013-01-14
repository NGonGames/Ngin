
#include "NGin/Vector2.hpp"

using namespace NGin;

Vector2::Vector2() {
    mx = 0;
    my = 0;
}

Vector2::Vector2(const Vector2& orig) {
    mx = orig.mx;
    my = orig.my;
}

Vector2::Vector2(int x, int y) {
    mx = mx;
    my = my;
}

Vector2::Vector2(float x, float y) {
    mx = mx;
    my = my;
}

Vector2 Vector2::operator+ (const Vector2& param) {
    Vector2 v2;
    v2.mx = mx + param.mx;
    v2.my = my + param.my;
    return v2;
}