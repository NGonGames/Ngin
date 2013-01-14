/* 
 * File:   Scene.h
 * Author: Ben Cochrane
 *
 * Created on January 13, 2013, 10:44 PM
 */

#pragma once

#include "NGin/NGin.hpp"
#include "NGin/Resource.hpp"
#include <string>

namespace NGin {

    class Scene : public Resource {
    public:
        Scene(std::string nameID, std::string sceneData);
        virtual ~Scene();
        std::string data() { return mData; };
    private:
        Scene(const Scene& orig);

        std::string mData;
    };

};