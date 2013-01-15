/* 
 * File:   Animation.hpp
 * Author: Ben Cochrane
 *
 * Created on January 14, 2013, 5:44 PM
 */

#pragma once

#include "NGin/NGin.hpp"
#include <vector>

class NGin::Animation {
public:
    Animation();
    Animation(NGin::Image* img);
    Animation(std::vector<NGin::Image*> imgs);
    Animation(const NGin::Animation& orig);
    virtual ~Animation();
    
    void AddFrame(NGin::Image*);
    NGin::Image* GetFrame();
    NGin::Image* RemoveFrame(int n);
    
    void Update();
    void Render(NGin::Graphics *g, NGin::Vector2 *position);
    
    int Length();
    int Speed();
    void Speed(float speed);
    
private:
    std::vector<NGin::Image*> mFrames;
    int mCurFrame;
    int mAnimSpeed;

};

