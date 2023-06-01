//implementation of a function called parseInts in C++. This function takes a string str as input and returns a vector of integers.

#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

vector<int> parseInts(string str);


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str;
    std::cin >> str;
    
    vector<int>numbers = parseInts(str);
    
    for(int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << std::endl;
    }
    
    return 0;
}

vector <int> parseInts(string str) {
    vector <int> arr;
    stringstream ss(str);
    int num;
    char ch;
    
    while (ss >> num) {
        arr.push_back(num);
        ss >> ch;
    }
    return arr;
}
