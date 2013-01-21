/* 
 * File:   GameObject.hpp
 * Author: Ben Cochrane
 *
 * Created on January 13, 2013, 3:05 PM
 */

#pragma once

#include "NGin/NGin.hpp"
#include <vector>

namespace NGin {

    namespace Game {
        
        class Object {
        public:
            Object(Level* level);
            virtual ~Object();

            virtual void Update();
            virtual void Render();

            void UpdateAnimation();
            void RenderAnimation();
        private:
            Object(const Object& orig);
        protected:
            Graphics* gfx;
            Level* gl;
            Input* in;
            Vector2* mPos;
            Vector2* mVel;

            std::vector<Animation*> mAnims;
        };

    };

};