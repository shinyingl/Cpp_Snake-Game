#include <iostream>
#include "controller.h"
#include "game.h"
#include "rock.h"
#include "renderer.h"

int main() {
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};

  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  Controller controller;
  Game game(kGridWidth, kGridHeight);
  game.Run(controller, renderer, kMsPerFrame);
  std::cout << "---------------------------------"<< std::endl;
  std::cout << "Game is terminated successfully!"<< std::endl;
  std::cout << "Snake Size: " << game.GetSize() << std::endl;
  std::cout << "Your Score: " << game.GetScore() << std::endl;
  if (game.GetScore()<0) {std::cout << "Try to detour from the gray rock to avoid score deduction. Let's try again!"<< std::endl;};
  
  return 0;
}