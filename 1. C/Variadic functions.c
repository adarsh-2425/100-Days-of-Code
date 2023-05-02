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


/******************************************************************************

Write a function named print_strings() that takes a variable number of string arguments and prints 
them to the console, separated by spaces. 
The function should take at least one argument, and should print "no strings" if no arguments are provided.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_strings(int count, ...){
    if (count ==  0) {
        printf("no strings");
        return;
    }

    va_list args;
    va_start(args, count);
    
    const char *str = va_arg(args, const char*);
    printf("%s", str);
    
    for(int i = 1; i < count; i++) {
        str = va_arg(args, const char*);
        printf(" %s", str);
    }
    va_end(args);
    printf("\n");
}

int main()
{
    print_strings(2, "hello", "world");

    return 0;
}
