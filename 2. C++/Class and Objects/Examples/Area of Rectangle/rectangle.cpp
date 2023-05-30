#include "rectangle.hpp"

//defining rectangle methods

//setting Dimensions
void Rectangle::setDimensions(double setwidth, double setheight) {
  width = setwidth;
  height = setheight;
}

//Getting Area
double Rectangle::getArea() {
  return width * height;
}
