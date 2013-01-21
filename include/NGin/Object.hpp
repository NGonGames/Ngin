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
            RenderContext* gfx;
            Level* gl;
            Input* in;
            Math::Vector2* mPos;
            Math::Vector2* mVel;

            std::vector<Animation*> mAnims;
        };

    };

};