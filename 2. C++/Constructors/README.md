# Constructors

Is there a way to give an object some data right when it gets created?

A constructor is a special kind of method that lets you decide how the objects of a class get created. It has the same name as the class and no return type. Constructors really shine when you want to instantiate an object with specific attributes.

If we want to make sure each City is created with a name and a population, we can use parameters and a member initializer list to initialize attributes to values passed in:

## Writing Definition
```
City::City(std::string new_name, int new_pop) {
  name = new_name;
  population = new_pop;
}
```

To instantiate an object with attributes, you can do:
```
// inside main()
City ankara("Ankara", 5445000);
```

## Question

1. Declare a ```public``` constructor for ```Song``` in song.hpp. Give it two ```std::string``` parameters:
```
new_title
new_artist
```
Then define the constructor inside song.cpp. Initialize title to ```new_title``` and artist to ```new_artist```.


2. In main(), instantiate a new ```Song``` called ```back_to_black```. Give it:

a ```title``` of "Back to Black"
an ```artist``` of "Amy Winehouse"

(You can print out each attribute of back_to_black using .get_title() and .get_artist().)
