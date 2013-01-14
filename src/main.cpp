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
    
    return true;
}

void NGin::Quit() {
    SDL_Quit();
}

int NGin::Execute() {
    bool quit = false;
    SDL_Event event;
    //ResourceManager::AddImage("bg01", "resources/images/bg1.png");
    //ResourceManager::AddImage("bg02", "resources/images/background0.png");
    
    Game* game = GameFactory::MakeGame();
    game->Init();
    while (!quit) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            } else {
                break;
            }
        }
        game->Update();
        game->Render();
        
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