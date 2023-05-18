//Create a program that takes in the weight of a person and then calculates how much that person would weigh on Mars.

#include <iostream>

int main() {
  
  double weightEarth;
  double weightMars;

std::cout << "Welcome to the Martian Weight Converter!" << "\n";

std::cout << "\n";

std::cout << "Are you ready for a cosmic weight loss?"<< "\n" << "Tell me your weight on Earth, and I'll let you know how much you'll weigh on Mars!" << "\n";

std::cout << "\n";

  //getting Earth weight from user
std::cout << "Enter your weight on Earth (in kilograms): ";

std::cin >> weightEarth;

weightMars = weightEarth * 0.38;

std::cout << "Your Martian weight is: " << weightMars << " pounds" << "\n";

}
