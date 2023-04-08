//Address of(&) and Indirection (*) operator in Pointers

#include <stdio.h>

int main()
{
    
    int a = 5;
    int *p = &a;
    
    printf("%d", *p);

    return 0;
}

//Pointer Addition

#include <stdio.h>

int main()
{
    int a[5] = {0, 1, -1, 10, 11};
    int *p = &a[0];
    
    p  = p + 2; // p + n * sizeofdatatype
    
    printf("%d", *p);

    return 0;
}
