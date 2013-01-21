/* 
 * File:   GameFactory.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 9, 2013, 4:53 PM
 */

#include "NGin/NGin.hpp"

using namespace NGin;
using namespace NGin::Resource;

GameFactory::GameFactory() {
}

GameFactory::GameFactory(const GameFactory& orig) {
}

GameFactory::~GameFactory() {
}

Application* GameFactory::MakeGame() {
    Manager *resource = new Manager;
    Window *window = new Window;
    Graphics *graphics = new Graphics(window);
    Input *input = new Input();
    Application *game = new Application(graphics, resource, window, input);
    return game;
}