//Text Adventure
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cout << "Welcome to the Adventure Game! Please enter your name: ";
    cin >> name;
    cout << "Hello, " << name << ". Let's begin our adventure!\n\n";
    
    //game loop
    while (true) {
        cout << "\nYou are standing in Area 51 and US Army is approaching you. You can go north, east, south or west. Where do you want to go? \n";
        string direction;
        cin >> direction;
        
    if (direction == "north") {
        cout << "\nYou go north and made friends with Army chief. You win!\n";
            break;
        }
        
    else if (direction == "south") {
        cout <<"\nYou go south into the experimental lab. Now they are going to inject modern lethal drugs into you. You may go coma. See you if you wake up. Bye!\n";
            break;
        }
        
    else if (direction == "east") {
        cout <<"\nYou need security clearance to go there. Choose another direction.\n";
    }
            
    else if (direction == "west") {
         cout <<"\nOOPS Aliens!! Aliens not a Hoax. Turn back and choose another direction.\n";
      }
    
    else  {
        cout <<"\nWhatcha doing?? Come on hooman..we dont have enough hydrogen on sun. Make it quick!. choose correct direction\n";
            }
        
    }
    
    cout << "Thanks for playing the Adventure Game, " << name << "!\n";

    return 0;
}
