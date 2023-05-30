#include <iostream>
#include "song.hpp"

int main() {

  Song electric_relaxation;

//Use Song‘s built-in .add_title() method to add a title to electric_relaxation: "Electric Relaxation".
electric_relaxation.add_title("Electric Relaxation");

//Use .get_title() to retrieve electric_relaxations title and print it to the terminal.
std::string title = electric_relaxation.get_title();
    std::cout << title << std::endl;
  
}
