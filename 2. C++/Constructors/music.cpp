#include <iostream>
#include "song.hpp"

int main() {

  Song back_to_black("Back to Black", "Amy Winehouse");

  //printing
  std::cout << back_to_black.get_title() << std::endl;
std::cout << back_to_black.get_artist() << std::endl;
  
}
