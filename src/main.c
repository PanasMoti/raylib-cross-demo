#include <stdio.h>
#include <stdlib.h>
#include <raylib.h>
#include <ini.h>
#include "load_cfg.h"

int main(void) {
    const char* config_path = "assets/cfg.ini";
    config cfg = { 0 };
    if(ini_parse(config_path, handler, &cfg) < 0) {
        fprintf(stderr, "FUCK\n");
    }
    printf("(%d %d %s)\n", cfg.window.width, cfg.window.height, cfg.window.title);
    const int width = cfg.window.width;
    const int height = cfg.window.height;
    const char* const title = cfg.window.title;
    InitWindow(width, height, title);
    SetTargetFPS(60);
    while(!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Hello World", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
