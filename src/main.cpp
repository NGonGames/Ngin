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

int main(int argc, char** argv) {
    Application *app = GameFactory::CreateGame();    
    return app->Execute();
}