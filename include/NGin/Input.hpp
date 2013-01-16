#pragma once

class NGin::Input {
public:
    Input();
    virtual ~Input();
    //key refers to key in the buffer not key on the keyboard
    enum key {
        zero        = SDLK_0,
        one         = SDLK_1,
        two         = SDLK_2,
        three       = SDLK_3,
        four        = SDLK_4,
        five        = SDLK_5,
        six         = SDLK_6,
        seven       = SDLK_7,
        eight       = SDLK_8,
        nine        = SDLK_9,
        a           = SDLK_a,
        b           = SDLK_b,
        c           = SDLK_c,
        d           = SDLK_d,
        e           = SDLK_e,
        f           = SDLK_f,
        g           = SDLK_g,
        h           = SDLK_h,
        i           = SDLK_i,
        j           = SDLK_j,
        k           = SDLK_k,
        l           = SDLK_l,
        m           = SDLK_m,
        n           = SDLK_n,
        o           = SDLK_o,
        p           = SDLK_p,
        q           = SDLK_q,
        r           = SDLK_r,
        s           = SDLK_s,
        t           = SDLK_t,
        u           = SDLK_u,
        w           = SDLK_w,
        x           = SDLK_x,
        y           = SDLK_y,
        z           = SDLK_z,
        up          = SDLK_UP,
        down        = SDLK_DOWN,
        left        = SDLK_LEFT,
        right       = SDLK_RIGHT,
        space       = SDLK_SPACE,
        tab         = SDLK_TAB,
        left_shift  = SDLK_LSHIFT,
        right_shift = SDLK_RSHIFT,
        enter       = SDLK_KP_ENTER,
        left_ctrl   = SDLK_LCTRL,
        right_ctrl  = SDLK_RCTRL,
        left_alt    = SDLK_LALT,
        right_alt   = SDLK_RALT,
        mouse_left  = SDL_BUTTON_LEFT + 323,
        mouse_right = SDL_BUTTON_RIGHT + 323,
    };

    void Update();
    bool Down(key k);
    bool Up(key k);
    bool Pressed(key k);
    bool Released(key k);
    int  MouseX();
    int  MouseY();

private:
    bool* current_state, *pressed_state, *released_state;
    int mouse_x,mouse_y;
    SDL_Event event;
};