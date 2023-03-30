//Ternary operator

#include <stdio.h>

int main()
{
    int a = 10, b = 15;
    int result;
    
    result = (a > b) ? a : b;
    
    printf("%d", result);
    return 0;
}