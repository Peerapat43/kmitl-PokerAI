#include <iostream>
#include <raylib.h>
int main() {
    InitWindow(800, 600, "Poker AI Game");
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello Poker AI!", 250, 250, 20, BLACK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
