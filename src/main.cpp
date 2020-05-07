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

  // Rock rock(3);
  // rock.SetObstacleSize();
  int ob_size;
  std::cout << "Please enter the obstacsize between 2 to 10" << std::endl;
  std::cin >> ob_size;
  std::cout << "rock size is " << ob_size << '\n';
  // Rock rock(ob_size);
  

  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight, ob_size);
  Controller controller;
  Game game(ob_size, kGridWidth, kGridHeight);
  game.Run(controller, renderer, kMsPerFrame);
  std::cout << "Game has terminated successfully!\n";
  std::cout << "Your Score: " << game.GetScore() << "\n";
  std::cout << "Snake Size: " << game.GetSize() << "\n";
  return 0;
}