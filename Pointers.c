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


//Program to access Array of int Pointers

#include <stdio.h>


int main()
{
    int arr[5] = {1,2,3,4,5};
    int i, *ptr[5];
    
    for(i = 0; i < 5; i++)
    {
        ptr[i] = &arr[i];
    }
    
    for(i = 0; i < 5; i++)
    {
        printf("%d ", *ptr[i]);
    }
}


//Pointer Increment and Decrement

#include <stdio.h>


int main()
{
    int arr[5] = {1,2,3,4,5};
    int i, *ptr[5];
    
    for(i = 0; i < 5; i++)
    {
        ptr[i] = &arr[i];
    }
    

        printf("%d ", *ptr[0] + 1);
        
        printf("%d ", *ptr[2] - 1);
    
}

