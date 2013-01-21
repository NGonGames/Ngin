/* 
 * File:   Animation.hpp
 * Author: Ben Cochrane
 *
 * Created on January 14, 2013, 5:44 PM
 */

#pragma once

#include "NGin/NGin.hpp"
#include <vector>

namespace NGin {
    
    namespace Game {

        class Animation {
        public:
            Animation();
            Animation(Image* img);
            Animation(std::vector<Image*> imgs);
            Animation(const Animation& orig);
            virtual ~Animation();

            void AddFrame(Image*);
            Image* GetFrame();
            Image* RemoveFrame(int n);

            void Update();
            void Render(Graphics *g, Vector2 *position);

            int Length();
            int Speed();
            void Speed(float speed);

        private:
            std::vector<Image*> mFrames;
            int mCurFrame;
            int mAnimSpeed;

        };

    };

};