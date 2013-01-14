/* 
 * File:   GameLevel.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 13, 2013, 2:10 PM
 */

#include "NGin/NGin.h"
#include "rapidxml/rapidxml.hpp"

using namespace NGin;

GameLevel::GameLevel(NGin::Graphics *graphics) {
    gfx = graphics;
    x = y = 0.f;
    xs = ys = 0.5f;
}

GameLevel::GameLevel(const GameLevel& orig) {
}

GameLevel::~GameLevel() {
}

void GameLevel::Update() {
    x += xs;
    y += ys;
    xs = x < 0 ? 0.5f : x > 320 ? -0.5f : xs;
    ys = y < 0 ? 0.5f : y > 240 ? -0.5f : ys;
}

void GameLevel::Render() {
    gfx->DrawImage("bg01", x, y);
}