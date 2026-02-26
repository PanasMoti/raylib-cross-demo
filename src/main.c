#include <stdio.h>
#include <stdlib.h>
#include <raylib.h>
#include <ini.h>
#include "load_cfg.h"
const char* config_path = "assets/cfg.ini";
config cfg = { 0 };

void preload() {
    if(ini_parse(config_path, handler, &cfg) < 0) {
        fprintf(stderr, "FUCK\n");
    }
    //printf("(%d %d %s)\n", cfg.window.width, cfg.window.height, cfg.window.title);
}
void load() {
    // load assets
}
void init() {
    const int width = cfg.window.width;
    const int height = cfg.window.height;
    const char* const title = cfg.window.title;
    InitWindow(width, height, title);
    SetTargetFPS(60);
}
void quit() {
    CloseWindow();
    free_config(&cfg);
}


int main(void) {
    preload();
    load();
    init();
    while(!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Hello World", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }
    quit();
    return 0;
}
