/* 
 * File:   GameObject.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 13, 2013, 3:05 PM
 */

#include "NGin/NGin.h"

using namespace NGin;

GameObject::GameObject(Graphics *graphics) {
    gfx = graphics;
    x = rand() % 320;
    y = rand() % 240;
    xspeed = 0.1f;
    yspeed = 0.1f;
}

GameObject::GameObject(const GameObject& orig) {
}

GameObject::~GameObject() {
}

void GameObject::Update() {
    x += xspeed;
    y += yspeed;
    xspeed = x < 0 ? 0.1f : x > 320 ? -0.1f : xspeed;
    yspeed = y < 0 ? 0.1f : y > 240 ? -0.1f : yspeed;
}

void GameObject::Render() {
    gfx->DrawImage("bg01", x, y);
}