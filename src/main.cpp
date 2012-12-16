/* 
 * File:   main.cpp
 * Author: Ben Cochrane
 *
 * Created on December 13, 2012, 1:51 PM
 */

#include <SDL/SDL.h>
#include "NGin.h"

NGinWindow window;
NGinGraphics graphics;
NGinResourceManager resources;

bool NGinInit() {
    if (SDL_Init(SDL_INIT_EVERYTHING) == -1) {
        return false;
    }
    window.linkNGinGraphics(&graphics);
    window.linkNGinResourceManager(&resources);
    
    graphics.linkNGinWindow(&window);
    graphics.linkNGinResourceManager(&resources);
    
    resources.linkNGinWindow(&window);
    resources.linkNGinGraphics(&graphics);
    return true;
}

void NGinCleanUp() {
    SDL_Quit();
}

int NGinExecute() {
    bool quit = false;
    SDL_Event event;
    resources.addImage("bg", "resources/images/background0.png");
    while (!quit) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
        }
        graphics.drawImage("bg", 0, 0);
        graphics.drawImage("bg", 320, 240);
    }
    NGinCleanUp();
    return 0;
}

int main(int argc, char** argv) {
    
    if (!NGinInit()) {
        printf("Initialization failed");
        return 1;
    }
    
    return NGinExecute();
}