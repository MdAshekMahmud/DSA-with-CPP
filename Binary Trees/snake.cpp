// #include "raylib.h"
// #include <algorithm>
// #include <deque>

// struct Cell {
//     int x, y;
// };
// static bool operator==(const Cell &a, const Cell &b) { return a.x == b.x && a.y == b.y; }

// int main() {
//     // Grid and rendering
//     const int cols = 25;
//     const int rows = 25;
//     const int cellPx = 24;
//     const int margin = 20;
//     const int boardW = cols * cellPx;
//     const int boardH = rows * cellPx;
//     const int screenW = boardW + margin * 2;
//     const int screenH = boardH + margin * 2;

//     InitWindow(screenW, screenH, "Snake (C++ + raylib)");
//     SetTargetFPS(60);

//     enum class State { Playing,
//                        GameOver };
//     State state = State::Playing;

//     // Snake state
//     std::deque<Cell> snake; // head at front
//     snake.push_front({cols / 2, rows / 2});
//     Cell dir{1, 0};     // moving right
//     Cell nextDir{1, 0}; // buffered direction changes

//     // Food
//     Cell food{GetRandomValue(0, cols - 1), GetRandomValue(0, rows - 1)};
//     auto occupies = [&](const Cell &c) {
//         return std::find(snake.begin(), snake.end(), c) != snake.end();
//     };
//     auto placeFood = [&]() {
//         // Try a reasonable number of times to find a free cell
//         for (int tries = 0; tries < 1000; ++tries) {
//             Cell c{GetRandomValue(0, cols - 1), GetRandomValue(0, rows - 1)};
//             if (!occupies(c)) {
//                 food = c;
//                 return;
//             }
//         }
//         // If snake fills the board, leave as-is (player basically won)
//     };

//     // Timing (fixed update)
//     const float step = 0.12f; // seconds per update (speed)
//     float acc = 0.0f;

//     auto resetGame = [&]() {
//         snake.clear();
//         snake.push_front({cols / 2, rows / 2});
//         dir = {1, 0};
//         nextDir = {1, 0};
//         placeFood();
//         state = State::Playing;
//         acc = 0.0f;
//     };

//     placeFood();

//     while (!WindowShouldClose()) {
//         float dt = GetFrameTime();
//         acc += dt;

//         // Input (buffer intended direction; apply on update tick)
//         if (IsKeyPressed(KEY_UP) || IsKeyPressed(KEY_W))
//             nextDir = {0, -1};
//         if (IsKeyPressed(KEY_DOWN) || IsKeyPressed(KEY_S))
//             nextDir = {0, 1};
//         if (IsKeyPressed(KEY_LEFT) || IsKeyPressed(KEY_A))
//             nextDir = {-1, 0};
//         if (IsKeyPressed(KEY_RIGHT) || IsKeyPressed(KEY_D))
//             nextDir = {1, 0};

//         // Prevent reversing into itself
//         if (snake.size() > 1) {
//             if (nextDir.x == -dir.x && nextDir.y == -dir.y) {
//                 nextDir = dir; // ignore reverse
//             }
//         }

//         // Update at fixed step
//         while (acc >= step) {
//             acc -= step;

//             if (state == State::Playing) {
//                 dir = nextDir;
//                 Cell head = snake.front();
//                 Cell newHead{head.x + dir.x, head.y + dir.y};

//                 // Collisions with walls
//                 if (newHead.x < 0 || newHead.x >= cols || newHead.y < 0 || newHead.y >= rows) {
//                     state = State::GameOver;
//                     break;
//                 }

//                 // Collisions with self (check against body)
//                 if (occupies(newHead)) {
//                     state = State::GameOver;
//                     break;
//                 }

//                 // Move
//                 snake.push_front(newHead);

//                 if (newHead == food) {
//                     // Grow and place new food
//                     placeFood();
//                 } else {
//                     // Normal move: remove tail
//                     snake.pop_back();
//                 }
//             } else if (state == State::GameOver) {
//                 // Wait for restart
//             }
//         }

//         // Restart on Enter
//         if (state == State::GameOver && (IsKeyPressed(KEY_ENTER) || IsKeyPressed(KEY_SPACE))) {
//             resetGame();
//         }

//         // Render
//         BeginDrawing();
//         ClearBackground(Color{245, 245, 245, 255}); // light gray

//         // Board
//         DrawRectangleLines(margin - 1, margin - 1, boardW + 2, boardH + 2, DARKGRAY);

//         // Optional grid lines (light)
//         Color gridCol = Color{220, 220, 220, 255};
//         for (int x = 1; x < cols; ++x) {
//             DrawLine(margin + x * cellPx, margin, margin + x * cellPx, margin + boardH, gridCol);
//         }
//         for (int y = 1; y < rows; ++y) {
//             DrawLine(margin, margin + y * cellPx, margin + boardW, margin + y * cellPx, gridCol);
//         }

//         // Food
//         DrawRectangle(margin + food.x * cellPx, margin + food.y * cellPx, cellPx, cellPx, RED);

//         // Snake
//         for (size_t i = 0; i < snake.size(); ++i) {
//             const Cell &c = snake[i];
//             Color segColor = (i == 0) ? Color{40, 180, 99, 255} : Color{46, 204, 113, 255};
//             DrawRectangle(margin + c.x * cellPx, margin + c.y * cellPx, cellPx, cellPx, segColor);
//         }

//         // UI
//         int score = (int)snake.size() - 1;
//         DrawText(TextFormat("Score: %d", score), margin, margin / 2 - 6, 20, DARKGRAY);

//         if (state == State::GameOver) {
//             const char *msg = "Game Over - Press Enter to restart";
//             int fw = MeasureText(msg, 24);
//             DrawText(msg, (screenW - fw) / 2, screenH / 2 - 12, 24, DARKGRAY);
//         }

//         EndDrawing();
//     }

//     CloseWindow();
//     return 0;
// }