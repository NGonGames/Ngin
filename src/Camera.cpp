/* 
 * File:   Camera.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 24, 2013, 12:05 PM
 */

#include "NGin/NGin.hpp"

using namespace NGin;
using namespace NGin::Game;

Camera::Camera(Level *level, Object *target) : Object(level) {
    mTarget = target;
}

Camera::~Camera() {}
void Camera::Render() {};

void Camera::Update() {
    mPos = mTarget->GetPosition();
    gfx->SetOffset(*mPos);
}