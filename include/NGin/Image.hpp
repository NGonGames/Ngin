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
    
        class Image {
        public:
            Image(Resource::Texture* texture);
            Image(Resource::Texture* texture, Math::Vector2 *origin, Math::Vector2 *size);
            Image(const Image& orig);
            virtual ~Image();
            void Render(RenderContext *g, Math::Vector2 *position);
            std::string Name() { return mName; };
        private:
            Math::Vector2 *mClipPos;
            Math::Vector2 *mClipSize;
            Resource::Texture *mTex;
            std::string mName;
        };

    };

};