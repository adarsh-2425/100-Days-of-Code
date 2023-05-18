//Create a program that asks for a distance in miles as input. The program will then output how much that distance is in kilometers

#include <iostream>

int main() {

  double miles;
  double kilometers;

std::cout << "Mile to Kilometer Converter!" << "\n";

std::cout << "\n";

//getting distance in mile
std::cout << "Enter Distance (in miles): ";

std::cin >> miles;

// calculating distance in kilometers
kilometers = miles * 1.609344;

std::cout << "Distance in Kilometer is: " << kilometers << " kms" << "\n";

}
