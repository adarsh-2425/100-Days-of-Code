//Program to reverse the case of input character

#include <stdio.h>
#include <ctype.h> //to use lower and upper functions

int main()
{
    
    char a;

    printf("Enter an alphabet : ");
    putchar('\n');  // to move to next Line
    
    a = getchar(); //getchar is used to get a single a character


    if(islower(a)) //checking if char is lowercase
    {
        putchar(toupper(a)); //if lowercase, converting to uppercase and printing with putchar
    }
    else
    {
        putchar(tolower(a)); //if uppercase, converting to lowercase and printing
    }

    return 0;

}

