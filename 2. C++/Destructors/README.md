# Destructors

A destructor is a special method that handles object destruction. Like a constructor, it has the same name as the class and no return type, but is preceded by a ~ operator and takes no parameters:

<b>Example: </b>
```
// city.hpp
class City {
 
  std::string name;
  int population;
 
public:
  City(std::string new_name, int new_pop);
  ~City();
};
 
// city.cpp
City::~City() {
 
  // any final cleanup
 
}
```

the destructor will be called automatically in any of the following scenarios:    

1. The object moves out of scope.   
2. The object is explicitly deleted.    
3. When the program ends.    

## Problem

Create a destructor for Song that prints "Goodbye " plus the song’s title.    
For example, a song with a title of "Drama" should print the following message when destroyed:   
```
Goodbye Drama!
```
