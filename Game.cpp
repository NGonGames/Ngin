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
    
    x = 0.0;
    y = 0.0;
    xdir = 1;
    ydir = 1;
}

Game::Game(const Game& orig) {
}

Game::~Game() {
}

void Game::Init() {
    rmgr->AddImage("bg01", "resources/images/bg1.png");
    
    wind->setWindowTitle("NGin v0.1");
}

void Game::Update() {
    // -----
    x += xdir;
    y += ydir;
    if (x > 320) {
        xdir = -.5;
    }
    if (y > 240) {
        ydir = -.5;
    }
    if (x < 0) {
        xdir = .5;
    }
    if (y < 0) {
        ydir = .5;
    }
    // -----
}

void Game::Render() {
    gfx->DrawImage("bg01", x, y);
    
    SDL_Flip(wind->getScreen());
}