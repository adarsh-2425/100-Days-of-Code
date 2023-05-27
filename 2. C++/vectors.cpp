// Write a program to find the sum of even numbers and the product of odd numbers in a vector.

#include <iostream>
#include <vector>

int main() {
  int odd_products = 1, even_sum = 0;
  std::vector <int> numbers = {2, 4, 3, 6, 1, 9};

  for (int i = 0; i < numbers.size(); i++) {
    if (numbers[i] % 2 == 0)
      even_sum += numbers[i];
    else
      odd_products *= numbers[i];
  }

  std::cout << "Sum of even numbers is " << even_sum << std::endl;

  std::cout << "Product of odd numbers is " << odd_products << std::endl;
}
