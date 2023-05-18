//convert a temperature from Fahrenheit (F) to Celsius (C).

#include <iostream>

int main() {
  
  double tempf = 50;
  double tempc;

  tempc = (tempf - 32) / 1.8;

  std::cout << "The temp is " << tempc << " degrees Celsius." << "\n";
   
}
