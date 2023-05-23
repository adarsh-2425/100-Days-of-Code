//Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.

/*
Write a space.cpp program that helps him keep track of his target weight by:

1. It should ask him what his earth weight is.
2. Ask him to enter a number for the planet he wants to fight on.
3. It should then compute his weight on the destination planet.
*/

#include <iostream>
using namespace std;

int main() {
  double earthW;
  int planet;

  cout << "Welcome to Interplanetary Weight Championship\n";
//getting weight on Earth
  cout << "Please Enter Your Earth Weight, Mr. Mac : ";
  cin >> earthW;
//getting name of planet which the fight takes place
  cout <<"Which Planet do you want to fight on? Enter Number \n";
  cout << "1. Mercury\n";
  cout << "2. Venus\n";
  cout << "3. Mars\n";
  cout << "4. Jupiter\n";
  cout << "5. Saturn\n";
  cout << "6. Uranus\n";
  cout << "7. Neptune\n";

  cin >> planet;

//calculating weight on that planet using switch case
  switch(planet) {
    case 1: cout << "Weight on Mercury is : " << 0.38 * earthW << "\n";
    break;

    case 2: cout << "Weight on Venus is : " << 0.91 * earthW << "\n";
    break;

    case 3: cout << "Weight on Mars is : " << 0.38 * earthW << "\n";
    break;

    case 4: cout << "Weight on Jupiter is : " << 2.34 * earthW << "\n";
    break;

    case 5: cout << "Weight on Saturn is : " << 1.06 * earthW << "\n";
    break;

    case 6: cout << "Weight on Uranus is : " << 0.92 * earthW << "\n";
    break;

    case 7: cout << "Weight on Neptune is : " << 1.19 * earthW << "\n";
    break;

    default: cout << "Hmm. We dont do that here!";
    break;
  } 
  
}
