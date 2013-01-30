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
    mPos = new Math::Vector2();
    mVel = new Math::Vector2();
    mController = NULL;
    mMask = NULL;
    mGraphic = NULL;
}

Camera::~Camera() {}
void Camera::Render() {};
Mask* Camera::GetMask() {};

void Camera::Update() {
    Math::Vector2* pos = mTarget->GetPosition();
    mPos->x = pos->x - 320;
    mPos->y = pos->y - 240;
    gfx->SetOffset(*mPos);
}