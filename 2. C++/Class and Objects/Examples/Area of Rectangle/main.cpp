#include <iostream>

// include your header file here:
#include "rectangle.hpp"

int main() {
  int area;
  //creating rectangle object
  Rectangle rect;
  //passing arguments
  rect.setDimensions(5.0, 3.0);

  area = rect.getArea();

  std::cout << "Area of rectangle is " << area << std::endl;

  return 0;
}
