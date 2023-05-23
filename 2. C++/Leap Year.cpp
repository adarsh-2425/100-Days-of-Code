#include <iostream>

int main() {
  int year;

  std::cout << "Enter Year : ";
  std::cin >>year;

//checking if year is a four digit number or not
  if (year <= 1000 || year > 9999) {
    std::cout << "Invalid Year.\n";
  }
  //leap year condition
  else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    std::cout << year << " is a leap year.\n";
  }
  else {
    std::cout << "Not a leap year.\n";
  }

}
