#include <stdio.h>
#include <raylib.h>

int main(void) {
    const int width = 800;
    const int height = 600;
    const char* const title = "raylib cross platform demo";
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
