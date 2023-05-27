// Whale Talk Project
#include <iostream>
#include <string>
#include <vector>

int main() {
    
    std::string human = "turpentine and turtles";
    
    //intializing vector (its a dynamic array in C++)
    std::vector <std::string> whale;
    
    //condition
    //human.size() returns size of human vector
    for (int i = 0; i < human.size(); i++) {
        switch (human[i]) {
            case 'a':
            case 'i':
            case 'o':
            //std::string(1, human[i]) syntax creates a new std::string object with a length of 1 and the value of human[i]
                whale.push_back(std::string(1, human[i]));
                break;
                
            case 'e':
            case 'u':
            // add the same character twice to the whale vector in a single line by calling push_back() twice with the same argument
                whale.push_back(std::string(1, human[i]));
                //The second line uses the back() function to retrieve a reference to the last element in the vector (which is the string object that was just added), and then calls push_back() on that string object to add the same character again.
                whale.back().push_back(human[i]);
                break;
            
            case 'y':
                whale.push_back(std::string(1, human[i]));
                break;
                
            default:
                break;
        }
    }
    
    std::cout << "Human Language : " << human << std::endl;
    
    std::cout << "Whale Language : ";
    for (int i = 0; i < whale.size(); i++) {
        std::cout << whale[i] ;
    }

    return 0;
}
