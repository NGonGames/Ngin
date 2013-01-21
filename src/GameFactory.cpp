/* 
 * File:   GameFactory.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 9, 2013, 4:53 PM
 */

#include "NGin/NGin.hpp"

using namespace NGin;
using namespace NGin::Resource;

Application *GameFactory::mApp = 0;
AudioContext *GameFactory::mAudio = 0;
Input *GameFactory::mInput = 0;
Manager *GameFactory::mResource = 0;
RenderContext *GameFactory::mRender = 0;
Window *GameFactory::mWindow = 0;

GameFactory::GameFactory() {
}

GameFactory::GameFactory(const GameFactory& orig) {
}

GameFactory::~GameFactory() {
}

Application* GameFactory::CreateGame() {
    mResource = new Manager;
    mWindow = new Window;
    mRender = new RenderContext(mWindow);
    mInput = new Input();
    mApp = new Application(mRender, mResource, mWindow, mInput);
    return mApp;
}