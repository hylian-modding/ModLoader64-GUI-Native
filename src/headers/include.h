#ifndef INCLUDES_H
    #define INCLUDES_H

    #include "raylib.h"

    #include "structs.h"
    #include "views.h"
    #include "functions.h"

    // config
    extern ControllerInput config_input_mapping[];
    extern int config_screen_width;
    extern int config_screen_height;
    extern int config_screen_width_mid;
    extern bool config_fullscreen;
    extern int config_fps;

    #define CONTROL_UP 1
    #define CONTROL_RIGHT 2
    #define CONTROL_DOWN 3
    #define CONTROL_LEFT 4
    #define CONTROL_ENTER 5
    #define CONTROL_BACK 6
    #define CONTROL_MENU 7

    // views

    extern void view_games_init();
    extern void view_games_activate();
    extern void view_games_draw();
    extern void view_games_deactive();
    extern void view_games_destroy();


#endif