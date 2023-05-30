#include <iostream>
#include "song.hpp"

int main() {

  Song back_to_black("Back to Black", "Amy Winehouse");
  
  //destructor
  std::cout << "Goodbye " << ~Song() << std::endl;
    
}
