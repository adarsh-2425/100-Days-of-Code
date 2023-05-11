/******************************************************************************

Modify Operators | C Technical Interview Questions and Answers

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a = 4, b = 5;
    
    b = a++ + a--;
    a = ++b + b--;
    
    printf("%d, %d", a, b);
}

//a = 19, b = 9
