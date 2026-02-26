#include <stdio.h>
#include <stdlib.h>
#include <raylib.h>
#include <ini.h>
#include "load_cfg.h"
#include "hex2color.h"
const char* config_path = "assets/cfg.ini";
config cfg = { 0 };
Color bgColor = { 0 };

void preload() {
    if(ini_parse(config_path, handler, &cfg) < 0) {
        fprintf(stderr, "FUCK\n");
    }
    printf("(%d %d %s %s)\n", cfg.window.width, cfg.window.height, cfg.window.title, cfg.window.bgcolor);
}
void load() {
    // load assets
}
void init() {
    const int width = cfg.window.width;
    const int height = cfg.window.height;
    const char* const title = cfg.window.title;
    bgColor = ColorFromHex(cfg.window.bgcolor);
    InitWindow(width, height, title);
    SetTargetFPS(60);
}
void quit() {
    CloseWindow();
    free_config(&cfg);
}

void update() {
}

void draw() {
    ClearBackground(bgColor);
    DrawText("Hello World", 190, 200, 20, LIGHTGRAY);
}

int main(void) {
    preload();
    load();
    init();
    while(!WindowShouldClose()) {
        update();
        //------------------
        BeginDrawing();
        draw();
        EndDrawing();
    }
    quit();
    return 0;
}
