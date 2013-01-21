/* 
 * File:   NGinGraphics.h
 * Author: Ben Cochrane
 *
 * Created on December 14, 2012, 11:12 AM
 */

#pragma once

#include "NGin/Manager.hpp"
#include "NGin/Window.hpp"

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <string>

namespace NGin {

    class RenderContext {
    public:

        RenderContext(Window *window);
        virtual ~RenderContext();

        void Clear();
        void Clear(int r, int g, int b);
        void SetOffset(Math::Vector2 &offset);
        void DrawTexture(Resource::Texture *texture, Math::Vector2 *pos);
        void DrawTexture(Resource::Texture *texture, Math::Vector2 *pos, Math::Vector2 *clipPos, Math::Vector2 *clipSize);
        void Finalize();

    private:
        RenderContext(const RenderContext& orig);
        Math::Vector2 *offset;
        Window* wind;
    };

};