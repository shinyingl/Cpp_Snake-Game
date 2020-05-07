#include "rock.h"

// Rock(int ob_size): ob_size {}

// void Rock::SetObstacleSize() {
//   std::cout << "Please enter the obstacsize between 2 to 10" << std::endl;
//   std::cin >> ob_size;
// }


void Rock::SetObstacleSize() {
  std::cout << "Please enter the obstacsize between 2 to 10" << std::endl;
  std::cin >> ob_size;
  std::cout << "rock size is " << ob_size << '\n';
}


int Rock::GetSize() const
{
    return ( ob_size );
}

// int Game::GetSize() const { return snake.size; }