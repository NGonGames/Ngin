/* 
 * File:   Player.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 24, 2013, 12:16 PM
 */

#include "NGin/NGin.hpp"

using namespace NGin;
using namespace NGin::Game;
using namespace NGin::Math;

Player::Player(Level *level, Vector2 *position) : Object(level, position) {
    mVel = new Vector2();
    mMask = GameFactory::CreateRectMask(*this, Vector2(32, 32));
    mGraphic = GameFactory::CreateImage("player0");
}

Player::~Player() {}

void Player::Update() {
    
}

void Player::Render() {
    mGraphic->Render(*mPos);
}

Mask* Player::GetMask() {
    return mMask;
}