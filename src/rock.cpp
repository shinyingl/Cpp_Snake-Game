#include "rock.h"

Rock::Rock() {
    SetObstacleSize();
}

void Rock::SetObstacleSize() {
  std::cout << "Please enter the obstacle size between 2 and 10: " << std::endl;
  std::cin >> ob_size;
    while (!(std::cin) || ob_size< 2 || ob_size > 10) {
        std::cout << "The value you entered is: " << ob_size << std::endl;
        std::cout << "Please enter a valid value between 2 to 10."<<std::endl;
        std::cin.clear();
        std::cin >> ob_size;
        }
  std::cout << "The obstacle size is " << ob_size << "."<<std::endl;
}

int Rock::GetSize() const
{
    return ( ob_size );
}
