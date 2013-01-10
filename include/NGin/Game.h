/* 
 * File:   Game.h
 * Author: Ben
 *
 * Created on January 10, 2013, 11:09 AM
 */

#ifndef NGINGAME_H
#define	NGINGAME_H

#include "NGin/NGin.h"

class NGin::Game {
public:
    Game(NGin::Graphics *graphics, NGin::ResourceManager *resources, NGin::Window *window);
    
    virtual ~Game();
    
    void Init();
    void Update();
    void Render();
private:
    Game(const NGin::Game& orig);
    
protected:
    NGin::Window* wind;
    NGin::ResourceManager* rmgr;
    NGin::Graphics* gfx;

};

#endif	/* NGINGAME_H */

