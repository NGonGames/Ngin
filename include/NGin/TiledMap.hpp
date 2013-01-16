/* 
 * File:   TiledMap.hpp
 * Author: Ben Cochrane
 *
 * Created on January 15, 2013, 4:30 PM
 */

#pragma once

#include "NGin/NGin.hpp"
#include <vector>

class NGin::TiledMap : public NGin::GameObject {
public:
    TiledMap(NGin::GameLevel* gameLevel);
    virtual ~TiledMap();
private:
    TiledMap(const NGin::TiledMap& orig);
    std::string TrimFileName(std::string path);
    std::vector<NGin::TiledTile*> mTiles;
};

