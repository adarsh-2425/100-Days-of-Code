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

/******************************************************************************

Modify Operators | C Technical Interview Questions and Answers

*******************************************************************************/

#include <stdio.h>

int main()
{
    int d, a = 1, b = 2;
    
    d = a++ + ++b;
    
    printf("%d %d %d", d, a, b);
}

/******************************************************************************

Modify Operators | C Technical Interview Questions and Answers

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a = 1, b = 1, c;
    
    c = a++ + b;
    
    printf("%d %d", a, b);
}

//a = 2, b = 1
