#include <iostream>
#include "controller.h"
#include "game.h"
#include "rock.h"
#include "renderer.h"

int main() {
 
  Rock rock;
  rock.test();
  std::cout << "rock size is " << rock.ob_size << '\n';
  
  return 0;
}