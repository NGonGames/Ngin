/* 
 * File:   GameFactory.h
 * Author: Ben Cochrane
 *
 * Created on January 9, 2013, 4:53 PM
 */

#pragma once

class NGin::GameFactory {
public:
    static NGin::Application* MakeGame();
    
private:
    GameFactory();
    GameFactory(const NGin::GameFactory& orig);
    virtual ~GameFactory();
};

