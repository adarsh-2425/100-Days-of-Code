//This time, instead of giving tempf a value of the current temperature in New York:
//Let’s ask the user what the temperature is using cin!

//Link: https://www.codecademy.com/courses/learn-c-plus-plus/lessons/cpp-variables/exercises/temperature2

#include <iostream>

int main() {
  
  double tempf;
  double tempc;
  
  // Ask the user
  std::cout << "Enter the temperature in Fahrenheit: ";
  std::cin >> tempf;
  
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}
