//Write a C++ program that solves the quadratic equation.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a, b, c, discriminant, x1, x2;

  cout << "Enter the coefficients of the quadratic equation : " << "\n";

  cout << "a: ";
  cin >> a;

  cout << "b: ";
  cin >> b;

  cout << "c: ";
  cin >> c;

  discriminant = ((b * b) - (4 * a * c));

  x1 = (-b + sqrt(discriminant)) / ( 2  * a);
  x2 = (-b - sqrt(discriminant)) / ( 2  * a);

  cout << "The solutions are X1 = " << x1 << ", X2 = " << x2 << ".\n";

  return 0;

}
