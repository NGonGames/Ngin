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
    Graphics::Get()->drawImage("bg", rand() % 320, rand() % 240);
    SDL_Flip(Window::Get()->getScreen()); // this line should stay. this finalizes gfx
}

int NGin::Execute() {
    bool quit = false;
    SDL_Event event;
    if (!ResourceManager::Get()->addImage("bg", "resources/images/bg.png")) {
        printf("sad\n");
    }
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