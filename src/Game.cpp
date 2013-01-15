/* 
 * File:   Game.cpp
 * Author: Ben
 * 
 * Created on January 10, 2013, 11:09 AM
 */

#include "NGin/NGin.hpp"

using namespace NGin;

Game::Game(Graphics *graphics, ResourceManager *resources, Window *window) {
    gfx = graphics;
    rmgr = resources;
    wind = window;
}

Game::Game(const Game& orig) {
}

Game::~Game() {
}

void Game::Init() {
    rmgr->AddPath("resources/images");    
    wind->setWindowTitle("NGin v0.1");
}

void Game::Update() {
    GetActiveLevel()->Update();    
}

void Game::Render() {
    gfx->Clear();
    GetActiveLevel()->Render();
    gfx->Finalize();
}

void Game::AddLevel(GameLevel *gameLevel) {
    mAllLevels.push_back(gameLevel);
}

GameLevel* Game::GetActiveLevel() {
    if (!mAllLevels.empty()) {
        return dynamic_cast<GameLevel*>((mAllLevels.back()));
    } else {
        return NULL;
    }
}