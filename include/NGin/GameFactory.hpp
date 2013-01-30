/* 
 * File:   GameFactory.h
 * Author: Ben Cochrane
 *
 * Created on January 9, 2013, 4:53 PM
 */

#pragma once

namespace NGin {

    class GameFactory {
    public:
        static Application* CreateGame();
        static Game::Image* CreateImage(const std::string &texID);
        static Game::Image* CreateImage(const std::string &texID,
                                        const Math::Vector2 &origin,
                                        const Math::Vector2 &size);
        
        static Game::RectMask* CreateRectMask(Game::Object &obj,
                                              const Math::Vector2 &size);
        static Game::RectMask* CreateRectMask(Game::Object &obj,
                                              const Math::Rectangle &rect);
        static Game::RectMask* CreateRectMask(Game::Object &obj,
                                              const int w, const int h);
        static Game::RectMask* CreateRectmask(Game::Object &obj,
                                              const float w, const float h);
        
        static Game::BitmapMask* CreateBitmapMask(Game::Object &obj,
                                                  const std::string &texID);
        static Game::BitmapMask* CreateBitmapMask(Game::Object &obj,
                                                  const Game::Image* &img);
        static Game::BitmapMask* CreateBitmapMask(Game::Object &obj,
                                                  const std::string &texID,
                                                  const Math::Vector2 &orig,
                                                  const Math::Vector2 &size);
    private:
        
        static Application *mApp;
        static AudioContext *mAudio;
        static Input *mInput;
        static Resource::Manager *mResource;
        static RenderContext *mRender;
        static Window *mWindow;
        
        GameFactory();
        GameFactory(const GameFactory& orig);
        virtual ~GameFactory();
    };

};