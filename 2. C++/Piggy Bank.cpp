//Piggy Bank
//Converts money entered in Pesos, Guatemalan Quetzals, and Salvadoran Colons into the current exchange rate of dollars.

#include <iostream>
using namespace std;

int main() 
{
  
  double pesos;
  double quetzals;
  double colons;

  double dollars;

  cout << "Enter number of Pesos : ";
  cin >> pesos;

  cout << "Enter number of Guatemalen Quetzals : ";
  cin >> quetzals;

  cout << "Enter number of Salvadoran Colons : ";
  cin >> colons;

//converting to Dollar
  dollars = (0.049 * pesos) + (0.1305 * quetzals)  + (0.1144 * colons);

  cout << "Total USD = $" << dollars << " dollars" << "\n";

  return 0;
  
}
