/* 
 * File:   Game.cpp
 * Author: Ben
 * 
 * Created on January 10, 2013, 11:09 AM
 */

#include "NGin/NGin.h"

using namespace NGin;

Game::Game(Graphics *graphics, ResourceManager *resources, IScriptEngine *scriptEngine, Window *window) {
    gfx = graphics;
    rmgr = resources;
    script = scriptEngine;
    wind = window;
}

Game::Game(const Game& orig) {
}

Game::~Game() {
}

void Game::Init() {
    rmgr->AddImage("bg01", "resources/images/bg1.png");
    rmgr->AddImage("bg02", "resources/images/background0.png");
}

void Game::Update() {
    
}

void Game::Render() {
    gfx->DrawImage("bg01", 0, 0);
    gfx->DrawImage("bg02", 320, 240);
    
    SDL_Flip(wind->getScreen());
}