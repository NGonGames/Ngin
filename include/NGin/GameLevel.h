/* 
 * File:   GameLevel.h
 * Author: Ben Cochrane
 *
 * Created on January 13, 2013, 2:10 PM
 */

#ifndef NGINGAMELEVEL_H
#define	NGINGAMELEVEL_H

#include "NGin/NGin.h"

class NGin::GameLevel {
public:
    GameLevel(NGin::Graphics* graphics);
    GameLevel(const NGin::GameLevel& orig);
    virtual ~GameLevel();
    
    void Update();
    void Render();
private:
    
    NGin::Graphics* gfx;
    std::vector<NGin::GameObject*> gObjects;
    
    float x, y, xs, ys;
};

#endif	/* NGINGAMELEVEL_H */

