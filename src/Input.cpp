#include "NGin/NGin.hpp"

using namespace NGin;

Input::Input() {    
    //using 500 because I dont know max of SDLK_keys enum
    current_state = new bool[500]();
    pressed_state = new bool[500]();
    released_state = new bool[500]();
}

Input::~Input() {
    delete[] current_state;
    delete[] pressed_state;
    delete[] released_state;
}

bool Input::Update() {
    //reset the pressed/released state arrays
    std::fill(pressed_state, pressed_state + 500, false);
    std::fill(released_state, released_state + 500, false);

    while (SDL_PollEvent(&event)) {
        switch(event.type) {
            case(SDL_QUIT):
                return false;
                break;
            case(SDL_KEYDOWN):
                pressed_state[event.key.keysym.sym] = true;
                current_state[event.key.keysym.sym] = true;
                break;
            case(SDL_KEYUP):
                released_state[event.key.keysym.sym] = true;
                current_state[event.key.keysym.sym] = false;
                break;
            case(SDL_MOUSEBUTTONDOWN):
                pressed_state[event.button.button+323] = true;
                current_state[event.button.button+323] = true;
                break;
            case(SDL_MOUSEBUTTONUP):
                released_state[event.button.button+323] = true;
                current_state[event.button.button+323] = false;
                break;
            case(SDL_MOUSEMOTION):
                mouse_x = event.motion.x;
                mouse_y = event.motion.y;
                break;
        }
    }
    
    return true;
}

bool Input::Down(key k) {
    return current_state[k];
}

bool Input::Up(key k) {
    return !current_state[k];
}

bool Input::Pressed(key k) {
    return pressed_state[k];
}

bool Input::Released(key k) {
    return released_state[k];
}

int Input::MouseX() {
    return mouse_x;
}

int Input::MouseY() {
    return mouse_y;
}