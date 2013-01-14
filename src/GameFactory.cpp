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
    Window *window = new Window;
    ResourceManager *resource = new ResourceManager();
    Graphics *graphics = new Graphics(resource, window);
    Game *game = new Game(graphics, resource, window);
    GameLevel *level0 = new GameLevel(graphics);
    game->AddLevel(level0);
    return game;
}