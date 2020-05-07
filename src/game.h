#ifndef GAME_H
#define GAME_H

#include <random>
#include "SDL.h"
#include "controller.h"
#include "renderer.h"
#include "snake.h"
#include "rock.h"

class Game {
 public:
  Game(int ob_size, std::size_t grid_width, std::size_t grid_height);
  void Run(Controller const &controller, Renderer &renderer,
           std::size_t target_frame_duration);
  int GetScore() const;
  int GetSize() const;
  int SetObstacleSize() const;
  bool FoodCell(int x, int y);
  bool ObstacleCell(int x, int y, int ob_size);

 private:
  Snake snake;
  // Rock(int ob_size);
  SDL_Point food;
  SDL_Point obstacle;

  std::random_device dev;
  std::mt19937 engine;
  std::uniform_int_distribution<int> random_w;
  std::uniform_int_distribution<int> random_h;

  int score{0};
  int ob_size;

  void PlaceFood();
  void PlaceObstacle();
  void Update();
};

#endif