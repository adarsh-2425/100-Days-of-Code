//prefix and postfix operator

#include <stdio.h>

int main()
{
    int a = 5,b,c,d;
    
    b = ++a; // a = 6, b = 6
    printf("b is %d \n",b);
    
    c = a++; // c = 6, a = 7
    printf("c is %d \n", c);
    
    d = a++; //d = 7, a = 8
    printf("d is %d \n", d);
    
    printf("a is %d \n", a);
    

    return 0;
}