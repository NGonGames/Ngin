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

Application::Application(RenderContext *graphics, Manager *resources, Window *window, Input *input) {
    mRender = graphics;
    mResource = resources;
    mWindow = window;
    mInput = input;
    
    running = true;
}

Application::Application(const Application& orig) {
}

Application::~Application() {
}

int Application::Execute() {
    Init();
    while (running) {
        Update();
        Render();
    }
    Quit();
}

void Application::Init() {
    
    if (SDL_Init(SDL_INIT_EVERYTHING) == -1) {
        running = false;
    }
    
    mWindow->SetWindowTitle("NGin v0.2");
    mResource->AddPath("resources/images");
    mResource->AddPath("resources/scenes");
    Level *level0 = new Level(mRender, mInput, mResource, "realtest");
    AddLevel(level0);
    
}

void Application::Update() {
    if (!mInput->Update()) {
        running = false;
    }
    GetActiveLevel()->Update();
}

void Application::Render() {
    GetActiveLevel()->Render();
    mRender->Finalize();
}

void Application::Quit() {
    SDL_Quit();
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