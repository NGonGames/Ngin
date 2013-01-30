/* 
 * File:   Camera.hpp
 * Author: Ben Cochrane
 *
 * Created on January 24, 2013, 12:05 PM
 */

#pragma once

#include "NGin/NGin.hpp"

namespace NGin {
    
    namespace Game {

        class Camera : public Object {
        public:
            Camera(Level *level, Object *target);
            virtual ~Camera();
            virtual void Update();
            virtual void Render();
            virtual Mask* GetMask();
        private:
            Camera(const Camera& orig);
            Object *mTarget;
        };

    };

};