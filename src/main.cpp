/* 
 * File:   main.cpp
 * Author: Ben Cochrane
 *
 * Created on December 13, 2012, 1:51 PM
 */

#include <SDL/SDL.h>
#include "NGin/NGin.hpp"
#include <stdio.h>

using namespace NGin;

bool running;

bool NGin::Init() {
    if (SDL_Init(SDL_INIT_EVERYTHING) == -1) {
        return false;
    }
    running = true;
    return true;
}

void NGin::Quit() {
    running = false;
}

int NGin::Execute() {
    Game* game = GameFactory::MakeGame();
    game->Init();
    while (running) {
        game->Update();
        game->Render();        
    }
    SDL_Quit();
    return 0;
}

int main(int argc, char** argv) {
    if (!NGin::Init()) {
        printf("Initialization failed\n");
        return 1;
    }
    
    return NGin::Execute();
}