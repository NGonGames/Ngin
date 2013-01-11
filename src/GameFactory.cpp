/* 
 * File:   GameFactory.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 9, 2013, 4:53 PM
 */

#include "NGin/NGin.h"

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
    IScriptEngine *jscript = new JavaScriptEngine(graphics, resource, window);
    return new Game(graphics, resource, jscript, window);
}