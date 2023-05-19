// write a C++ program to calculate a dog's age in "dog years" based on their age in human years

//Dog Years
#include <iostream>
using namespace std;

int main() {
  int humanAge, dogAge;
  
  cout << "Enter your dog's age in human years : ";
  cin >> humanAge;

  //it is commonly said that one human year is equivalent to 7 dog years
  dogAge = humanAge * 7;

  cout << "Your Dog's age in dog years is " <<  dogAge << "\n";

}
