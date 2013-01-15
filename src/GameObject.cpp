/* 
 * File:   GameObject.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 13, 2013, 3:05 PM
 */

#include "NGin/NGin.hpp"

using namespace NGin;

GameObject::GameObject(GameLevel *gameLevel) {
    gl = gameLevel;
    gfx = gl->gfx;
    mPos = new Vector2(rand() % 610, rand() % 450);
    mVel = new Vector2(1.f, 1.f);
    if (gl->gObjects.size() == 0)
    mAnims.push_back(new Animation(new Image(gl->rmgr->GetImage("bg1"), new Vector2(rand() % 290, rand() % 210), new Vector2(30, 30))));
    else
    mAnims.push_back(new Animation(new Image(gl->rmgr->GetImage("bg2"), new Vector2(rand() % 290, rand() % 210), new Vector2(30, 30))));
}

GameObject::GameObject(const GameObject& orig) {
}

GameObject::~GameObject() {
}

void GameObject::Update() {
    mAnims.at(0)->Update();
    mPos->x += mVel->x;
    mPos->y += mVel->y;
    mVel->x = mPos->x < 0 ? 1.f : mPos->x > 610 ? -1.f : mVel->x;
    mVel->y = mPos->y < 0 ? 1.f : mPos->y > 450 ? -1.f : mVel->y;
}

void GameObject::Render() {
    mAnims.at(0)->Render(gl->gfx, mPos);
}