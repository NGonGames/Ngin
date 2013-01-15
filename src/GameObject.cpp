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
    mPos = new Vector2(rand() % 320, rand() % 240);
    mVel = new Vector2(.1f, .1f);
    mAnims.push_back(new Animation(new Image(gl->rmgr->GetImage("bg1"))));
}

GameObject::GameObject(const GameObject& orig) {
}

GameObject::~GameObject() {
}

void GameObject::Update() {
    mAnims.at(0)->Update();
    mPos->x += mVel->x;
    mPos->y += mVel->y;
    mVel->x = mPos->x < 0 ? .1f : mPos->x > 320 ? -.1f : mVel->x;
    mVel->y = mPos->y < 0 ? .1f : mPos->y > 240 ? -.1f : mVel->y;
}

void GameObject::Render() {
    mAnims.at(0)->Render(gl->gfx, mPos);
}