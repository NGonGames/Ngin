/* 
 * File:   Image.hpp
 * Author: Ben Cochrane
 *
 * Created on January 14, 2013, 2:14 PM
 */

#pragma once

#include "NGin/NGin.hpp"

namespace NGin {

    namespace Game {
    
        class Image : public Graphic {
        public:
            Image(RenderContext *rc, Resource::Texture* texture);
            Image(RenderContext *rc, Resource::Texture* texture,
                  Math::Vector2 *origin, Math::Vector2 *size);
            Image(const Image& orig);
            
            virtual ~Image();
            
            virtual void Update();
            virtual void Render(const Math::Vector2 &position);
            
            void SetOrigin(const Math::Vector2 &origin);
            void SetClip(const Math::Vector2 &origin);
            void Render(Math::Vector2 *position);
            std::string Name() { return mName; };
            
        private:
            Math::Vector2 *mClipPos;
            Math::Vector2 *mClipSize;
            Resource::Texture *mTex;
            RenderContext* mRender;
            std::string mName;
        };

    };

};