/* 
 * File:   main.cpp
 * Author: Ben Cochrane
 *
 * Created on December 13, 2012, 1:51 PM
 */

#include <SDL/SDL.h>
#include "NGin/NGin.h"
#include <stdio.h>

using namespace NGin;

bool NGin::Init() {
    if (SDL_Init(SDL_INIT_EVERYTHING) == -1) {
        return false;
    }
    Window window;
    ResourceManager resource;
    Graphics graphics;
    return true;
}

void NGin::Quit() {
    SDL_Quit();
}

void NGin::Update() {
    // call JavaScript code here
    Graphics::Get()->drawImage("bg01", rand() % 160, rand() % 120);
    Graphics::Get()->drawImage("bg02", 320 + rand() % 160, 240 + rand() % 120);
    SDL_Flip(Window::Get()->getScreen()); // this line should stay. this finalizes gfx
}

int NGin::Execute() {
    bool quit = false;
    SDL_Event event;
    ResourceManager::Get()->addImage("bg01", "resources/images/bg1.png");
    ResourceManager::Get()->addImage("bg02", "resources/images/background0.png");
    
    while (!quit) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
        }
        NGin::Update();
    }
    NGin::Quit();
    return 0;
}

int main(int argc, char** argv) {
    if (!NGin::Init()) {
        printf("Initialization failed\n");
        return 1;
    }
    
    return NGin::Execute();
}