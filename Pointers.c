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


//Pointer Comparison

#include <stdio.h>

int main()
{
    int a = 5, b = 10;
    int *p1 = &a, *p2 = &b;
    
    if(p1 > p2)
        printf("P1 greater");
    else
        printf("p2 greater");
    
}


//Pointer to a Pointer

#include <stdio.h>

int main()
{
    int a = 5;
    int *p1 = &a;
    int **p2 = &p1;
    
    printf("%d", **p2);
    
}


//Concatenate Strings using Pointer

#include <stdio.h>

int main()
{
    char str1[15] = "lol";
    char str2[10] = "happens";
    
    char *first = str1;
    char *second = str2;
    
    while(*first)
    {
        first++;
    }
    
    while(*second)
    {
        *first = *second;
        first++;
        second++;
    }
    
    *first = '\0';
    
    printf("%s", str1);
    
}


//Reverse a Series of Numbers using Pointers
#include <stdio.h>

int main()
{
    int a[5], n = 5, *p;
    
    for(p = a; p <= a+n-1; p++)
        scanf("%d", p);
        
    for(p = a+n-1; p >= a; p--)
        printf("%d ", *p);
    
}

//Reverse a String using Pointer
#include <stdio.h>

int main()
{
    char a[5] = "hmmmm";

    int n = 5, i;
    char ch;
    
    char *begin = a;
    char *end = a+n-1;
    for(i = 0; i < (n-1)/2; i++)
    {
        ch = *end;
        *end = *begin;
        *begin = ch;
        
        begin++;
        end--;
    }
    printf("%s", a);
}
