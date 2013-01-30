/* 
 * File:   Scene.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 13, 2013, 10:44 PM
 */

#include "NGin/NGin.hpp"

using namespace NGin;
using namespace NGin::Resource;

Scene::Scene(std::string nameID, std::string sceneData) {
    mName = nameID;
    mData = sceneData;
}

Scene::Scene(const Scene& orig) {
}

Scene::~Scene() {
}

