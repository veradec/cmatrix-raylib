#include <raylib.h>

#define COLUMNS 1920
#define ROWS 1080

int main() {
  InitWindow(COLUMNS, ROWS, "[raylib] - CMatrix");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);

    EndDrawing();
  }

  CloseWindow();

  return 0;
  
}
