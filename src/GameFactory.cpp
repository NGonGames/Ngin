/* 
 * File:   GameFactory.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 9, 2013, 4:53 PM
 */

#include "NGin/NGin.hpp"

using namespace NGin;

GameFactory::GameFactory() {
}

GameFactory::GameFactory(const GameFactory& orig) {
}

GameFactory::~GameFactory() {
}

Game* GameFactory::MakeGame() {
    ResourceManager *resource = new ResourceManager;
    Window *window = new Window;
    Graphics *graphics = new Graphics(window);
    Input *input = new Input();
    Game *game = new Game(graphics, resource, window, input);
    return game;
}