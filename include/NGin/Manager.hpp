/* 
 * File:   ResourceManager.h
 * Author: Ben Cochrane
 *
 * Created on December 14, 2012, 10:34 AM
 */

#pragma once

#include "NGin/Texture.hpp"
#include "NGin/Scene.hpp"

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <string>
#include <vector>
#include <utility>
#include "boost/filesystem.hpp"

namespace NGin {

    namespace Resource {
    
        class Manager {
        public:

            Manager();
            Manager(std::string path);
            virtual ~Manager();

            bool AddPath(std::string path);

            bool AddImage(std::string name, std::string path);
            Texture* GetTexture(std::string name);

            bool AddScene(std::string name, std::string path);
            Scene* GetScene(std::string name);

        private:

            Manager(const Manager& orig);
            std::vector<Texture*> mTextures;
            std::vector<Scene*> mScenes;

        };

    };

};