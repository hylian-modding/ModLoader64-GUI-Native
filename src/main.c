#include "headers/include.h"

#define VIEW_COUNT 7

int last_view = -1;
int view = -1;
UIView views[VIEW_COUNT];

void main() {
    // init config
    SetExitKey(-255); // Disable close app with ESC 

    load_config();

    InitWindow(config_screen_width, config_screen_height, "ModLoader 64");
    SetTargetFPS(config_fps);

    NewUiView(views[0], 0, "Menu", &view_placeholder_init, &view_placeholder_activate, &view_placeholder_draw, &view_placeholder_deactive, &view_placeholder_destroy);
    NewUiView(views[1], 0, "Loading", &view_placeholder_init, &view_placeholder_activate, &view_placeholder_draw, &view_placeholder_deactive, &view_placeholder_destroy);
    NewUiView(views[2], 0, "Select Game", &view_games_init, &view_games_activate, &view_games_draw, &view_games_deactive, &view_games_destroy);
    NewUiView(views[3], 0, "Gamepad Mapping", &view_placeholder_init, &view_placeholder_activate, &view_placeholder_draw, &view_placeholder_deactive, &view_placeholder_destroy);
    NewUiView(views[4], 0, "Create Game", &view_placeholder_init, &view_placeholder_activate, &view_placeholder_draw, &view_placeholder_deactive, &view_placeholder_destroy);
    NewUiView(views[5], 0, "Plugin Settings", &view_placeholder_init, &view_placeholder_activate, &view_placeholder_draw, &view_placeholder_deactive, &view_placeholder_destroy);
    NewUiView(views[6], 0, "Start Game", &view_placeholder_init, &view_placeholder_activate, &view_placeholder_draw, &view_placeholder_deactive, &view_placeholder_destroy);


    for (int i = 0; i < VIEW_COUNT; i++)
    {
        views[i].init();
    }

    while (!WindowShouldClose())
    {
        BeginDrawing();

        if(view != last_view){
            views[last_view].deactive();
            views[view].active();
        }

        views[view].draw();

        EndDrawing();
    }
    
    for (int i = 0; i < VIEW_COUNT; i++)
    {
        views[i].destroy();
    }
    
    CloseWindow();

    return 0;    
}