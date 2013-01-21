/* 
 * File:   Game.cpp
 * Author: Ben
 * 
 * Created on January 10, 2013, 11:09 AM
 */

#include "NGin/NGin.hpp"

using namespace NGin;
using namespace NGin::Game;
using namespace NGin::Resource;

Application::Application(Graphics *graphics, Manager *resources, Window *window, Input *input) {
    gfx = graphics;
    rmgr = resources;
    wind = window;
    in = input;
}

Application::Application(const Application& orig) {
}

Application::~Application() {
}

void Application::Init() {
    wind->SetWindowTitle("NGin v0.2");
    rmgr->AddPath("resources/images");
    rmgr->AddPath("resources/scenes");
    Level *level0 = new Level(gfx, in, rmgr, "realtest");
    AddLevel(level0);
}

void Application::Update() {
    in->Update();
    GetActiveLevel()->Update();
}

void Application::Render() {
    GetActiveLevel()->Render();
    gfx->Finalize();
}

void Application::AddLevel(Level *level) {
    mAllLevels.push_back(level);
}

Level* Application::GetActiveLevel() {
    if (!mAllLevels.empty()) {
        return dynamic_cast<Level*>((mAllLevels.back()));
    } else {
        return NULL;
    }
}