/* 
 * File:   GameObject.h
 * Author: Ben Cochrane
 *
 * Created on January 13, 2013, 3:05 PM
 */

#ifndef NGINGAMEOBJECT_H
#define	NGINGAMEOBJECT_H

#include "NGin/NGin.h"

class NGin::GameObject {
public:
    GameObject(NGin::Graphics *graphics);
    GameObject(const NGin::GameObject& orig);
    virtual ~GameObject();
    
    void Update();
    void Render();
private:
    NGin::Graphics* gfx;
    
    float x, y, xspeed, yspeed;

};

#endif	/* NGINGAMEOBJECT_H */

