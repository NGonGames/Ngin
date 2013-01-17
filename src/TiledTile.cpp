/* 
 * File:   TiledTile.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 15, 2013, 4:43 PM
 */

#include "NGin/NGin.hpp"

using namespace NGin;

TiledTile::TiledTile(GameLevel *gl, Texture* tex, Vector2 *position, Vector2* clipPos, Vector2* clipSize) : GameObject(gl) {
    mPos = position;
    mAnims.push_back(new Animation(new Image(tex, clipPos, clipSize)));
}

TiledTile::~TiledTile() {
}

void TiledTile::Update() {
    this->UpdateAnimation();
}

void TiledTile::Render() {
    this->RenderAnimation();
}