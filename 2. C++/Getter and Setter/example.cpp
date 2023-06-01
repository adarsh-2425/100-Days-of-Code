// You have to create a class, named Student, representing the student's details, as mentioned above, and store the data of a student. Create setter and getter functions for each element; that is, the class should at least have following functions:

// get_age, set_age
// get_first_name, set_first_name
// get_last_name, set_last_name
// get_standard, set_standard

//Also, you have to create another method to_string() which returns the string consisting of the above elements, separated by a comma(,).

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

//student class
class Student {
private:
    int age;
    string first_name;
    string last_name;
    int standard;
public:
    //constructor
    Student (int age = 0, string first_name = "", string last_name = "", int standard = 0) : age(age), first_name(first_name), last_name(last_name), standard(standard) {};
    
    //Getter functions
    int getAge() const {
        return age;
    }
    string getFirstName() const {
        return first_name;
    }
    string getLastName() const {
        return last_name;
    }
    int getStandard() const {
        return standard;
    }
    
    //Setter Functions
    void setAge(int newAge) {
        age = newAge;
    }
    void setFirstName(string newFirstName) {
        first_name = newFirstName;
    }
    void setLastName(string newLastName) {
        last_name = newLastName;
    }
    void setStandard(int newStandard) {
        standard = newStandard;
    }
    
    //streaming
    string to_string() {
        stringstream ss;
        
        ss << age << "," << first_name << "," << last_name << "," << standard;
        
        return ss.str();
    }
    
    void from_string(const string& str) {
        stringstream ss(str);
        char ch;
        
        ss >> age >> ch >> first_name >> ch >> last_name >> ch >> standard;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int age;
    string first_name;
    string last_name;
    int standard;
    
    Student student;
    
    //input
    std::cin >> age >> first_name >> last_name >> standard;
    
    //setting
    student.setAge(age);
    student.setFirstName(first_name);
    student.setLastName(last_name);
    student.setStandard(standard);
    
    //getting
    std::cout << student.getAge() << std::endl;
    std::cout << student.getLastName() << ", " << student.getFirstName() << std::endl;
    std::cout << student.getStandard() << std::endl;
    
    std::cout << "\n";
    
    //streaming
    std::cout << student.to_string() << std::endl;
      
    return 0;
}
