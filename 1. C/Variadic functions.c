/******************************************************************************

variadic functions in c

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum(int count, ...)
{
    va_list args;
    va_start (args, count);
    
    int s = 0, i;
    for(i = 0; i < count; i++){
        int x = va_arg(args, int);
        s += x;
    }
    va_end(args);
    return s;
}

int main()
{
    printf("Sum is : %d\n", sum(2, 2, 3));

    return 0;
}
