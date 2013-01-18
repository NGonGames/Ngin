/* 
 * File:   Game.cpp
 * Author: Ben
 * 
 * Created on January 10, 2013, 11:09 AM
 */

#include "NGin/NGin.hpp"

using namespace NGin;

Game::Game(Graphics *graphics, ResourceManager *resources, Window *window, Input *input) {
    gfx = graphics;
    rmgr = resources;
    wind = window;
    in = input;
}

Game::Game(const Game& orig) {
}

Game::~Game() {
}

void Game::Init() {
    wind->SetWindowTitle("NGin v0.1");
    rmgr->AddPath("resources/images");
    rmgr->AddPath("resources/scenes");
    GameLevel *level0 = new GameLevel(gfx, in, rmgr, "realtest");
    AddLevel(level0);
}

void Game::Update() {
    //input update should happen before game update.
    in->Update();
    GetActiveLevel()->Update();
}

void Game::Render() {
    //gfx->Clear();
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