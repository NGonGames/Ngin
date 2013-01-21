/* 
 * File:   Animation.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 14, 2013, 5:44 PM
 */

#include "NGin/NGin.hpp"

using namespace NGin;
using namespace NGin::Game;
using namespace NGin::Math;
using namespace std;

Animation::Animation() {
    mCurFrame = 0;
    mAnimSpeed = 1;
}

Animation::Animation(Image* img) {
    mFrames.push_back(img);
    mCurFrame = 0;
    mAnimSpeed = 1;
}

Animation::Animation(vector<Image*> imgs) {
    mCurFrame = 0;
    mAnimSpeed = 1;
    for (auto img : imgs) {
        mFrames.push_back(img);
    }
}

Animation::Animation(const Animation& orig) {
    //@TODO: Add Copy Constructor for Image class
}

Animation::~Animation() {
}

void Animation::AddFrame(Image* img) {
    mFrames.push_back(img);
}

Image* Animation::GetFrame() {
    if (!mFrames.empty()) {
        return mFrames.at(static_cast<int>(mCurFrame));
    }
    return NULL;
}

Image* Animation::RemoveFrame(int n) {
    int c = 0;
    for (vector<Image*>::iterator i = mFrames.begin(), e = mFrames.end(); i != e; ++i) {
        if (c == n) {
            Image* img = mFrames.at(c);
            mFrames.erase(i);
            return img;
        }
        c++;
    }
    return NULL;
}

void Animation::Update() {
    if (mFrames.size() > 1) {
        mCurFrame += mAnimSpeed;
        if (mCurFrame > mFrames.size()) {
            mCurFrame -= mFrames.size();
        }
        if (mCurFrame < 0) {
            mCurFrame += mFrames.size();
        }
    }
}

void Animation::Render(Graphics *g, Vector2 *position) {
    mFrames.at(static_cast<int>(mCurFrame))->Render(g, position);
}