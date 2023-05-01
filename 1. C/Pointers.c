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


//Reverse a String using Pointer
#include <stdio.h>

int main()
{
   int a = 5;
   int b = 10;
   
   int *p1 = &a;
   int *p2 = &b;
   
   int temp = *p1;
   *p1 = *p2;
   *p2 = temp;
   
   printf("%d ", a);
   printf("%d", b);
}

//Pointer to a Function
#include <stdio.h>

int sum(int,int);

int main()
{
   int s = 0;
   int (*ptr)(int, int) = sum;
   
   s = ptr(2,5);
   
   printf("%d", s);
   
}

int sum(int a, int b)
{
    return a + b;
}

//Write a program to swap two integer variables using pointers.

#include <stdio.h>

int main()
{
    int a = 5, b = 10;
    int *ptr1 = &a, *ptr2 = &b;
    
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    
    printf("%d %d", a, b);
}


//Write a function to compute the sum of two integer values and store the result in a third integer variable using pointers.

#include <stdio.h>

int sum(int *ptr1, int *ptr2);

int main()
{
    int a = 5, b = 10, result = 0;;
    int *ptr1 = &a, *ptr2 = &b;
    
    result = sum(ptr1, ptr2);
    
    
    
    printf("%d", result);
}

int sum(int *ptr1, int *ptr2){
    return *ptr1 + *ptr2;
} 


//Write a program to find the largest element in an array of integers using pointers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n = 5;
    
    ptr = (int *) malloc (n * sizeof(int));
    
    for(int i = 0; i < 5; i++){
        scanf("%d", ptr + i);
    }
    
    int large = ptr[0];
    for(int i = 1; i < 5; i++){
        if(ptr[i] > large){
            large = ptr[i];
        }
            
    }
    
    printf("\n %d", large);
    
    free(ptr);
}

//Write a function to reverse a string using pointers.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *, int);

int main()
{
    char *str;
    str = (char *) malloc (10 * sizeof(char));
    
    printf("Enter string : ");
    scanf("%s", str);
    
    reverse(str, strlen(str));
    
    free(str);
}

void reverse(char *str, int n){
    for(int i = 0; i < n/2; i++){
        int temp = str[i];
        str[i] = str[n-1-i];
        str[n-1-i] = temp;
    }
    printf("%s", str);
}


//Write a program in C to declare a string variable, and then use a pointer to print each character of the string on a new line.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str;
    str = (char *) malloc (20 * sizeof(char));
    
    printf("Enter string : ");
    scanf("%s", str);
    
    for(int i = 0; i < str[i]; i++){
        printf("%c\n", str[i]);
    }
    
    free(str);
}


//Write a program in C that takes an array of integers as input, and then uses pointers to find the largest and smallest values in the array.

#include <stdio.h>
#include <stdlib.h>

int largest_smallest(int *, int, int *, int *);

int main()
{
    int *arr, n, i;
    printf("Enter size of array : ");
    scanf("%d", &n);
    
    arr = (int *) malloc (n * sizeof(int));
    
    printf("Enter numbers : ");
    for(i = 0; i < n; i++){
        scanf("%d", (arr + i));
    }
    
    int large, small;
    
    largest_smallest(arr, n, &large, &small);
    
    printf("largest is %d\n", large);
    printf("smallest is %d\n", small);
    
    free(arr);
}

int largest_smallest(int *arr, int n, int *large, int *small){
    int i;
    *large = arr[0];
    *small = arr[0];
    for(i = 1; i < n; i++){
        if(arr[i] > *large)
            *large = arr[i];
        else if(arr[i] < *small)
            *small = arr[i];
            
    }
}
