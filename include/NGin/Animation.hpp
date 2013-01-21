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

        class Animation : public Graphic {
        public:
            Animation();
            Animation(Graphic* img);
            Animation(std::vector<Graphic*> imgs);
            Animation(const Animation& orig);
            virtual ~Animation();

            void AddFrame(Graphic*);
            Graphic* GetFrame();
            Graphic* RemoveFrame(int n);

            virtual void Update();
            virtual void Render(const Math::Vector2 &position);

            int Length();
            int Speed();
            void Speed(float speed);

        private:
            std::vector<Graphic*> mFrames;
            int mCurFrame;
            int mAnimSpeed;

        };

    };

};