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
        printf("Initialized SDL incorrectly");
        return false;
    }
    Window window;
    ResourceManager resource;
    Graphics graphics;
    printf("Initialized SDL correctly");
    return true;
}

void NGin::Quit() {
    SDL_Quit();
}

void NGin::Update() {
    // call JavaScript code here
    Graphics::Get()->drawImage("bg", 0, 0); // this line should go, and be called from JS
    Graphics::Get()->drawImage("bg", 320, 240);
    SDL_Flip(Window::Get()->getScreen()); // this line should stay. this finalizes gfx
}

int NGin::Execute() {
    bool quit = false;
    SDL_Event event;
    ResourceManager::Get()->addImage("bg", "resources/images/background0.png");
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
    printf("Begin program.");
    if (!NGin::Init()) {
        printf("Initialization failed");
        return 1;
    }
    
    return NGin::Execute();
}