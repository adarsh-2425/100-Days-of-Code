
//For looop to print number upto 25


#include <stdio.h>

int main()
{
    int i;
    for ( i = 1; i <= 25; i++){
        printf("%d\n", i);
    }
        
    
    return 0;
}

//program to print table of a number using for loop

#include <stdio.h>

int main()
{
    int num, result, i;
    
    printf("Enter Number : ");
    scanf("%d", &num);
    
    for(i = 1; i <=12; i++){
         result = num * i;
         printf("%d * %d = %d \n", i, num, result);
    }
      
    return 0;
}

//print 5 stars

#include <stdio.h>

int main()
{
    for(int i = 0; i < 5; i++){
        printf("*");
    }

    return 0;
}

//print 5 stars using nested for loop

#include <stdio.h>

int main()
{
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


//Basic for Loop

#include <stdio.h>

int main()
{
    int arr[5];
    int i;
    
    printf("Enter Numbers : ");
    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    
     for(i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}


//Basic Basic while Loop

#include <stdio.h>

int main()
{
    int arr[5];
    int i = 0; //always initialize values before using them on while
    
    printf("Enter Numbers : ");
    
    while(i < 5) //condition
    {
        scanf("%d",&arr[i]);
        
        i++; //incrementing i
    }
    
    for(i = 0; i < 5; i++){
            printf("%d ", arr[i]);
    }
    
    return 0;
}



//Basic program to show use of nested for Loops

#include <stdio.h>

int main()
{
    int i, j; 
    
    for(i = 0; i < 5; i++)
    {
        printf("\t");
        
        for(j = 0; j < 5; j++)
        {
            printf("*");
        }
         printf("\n");
    }
    
    return 0;
}



//Program to find Factorial of number using for loop

#include <stdio.h>

int main()
{
    int i,num;
    int fact = 1;
    
    printf("Enter Number : ");
    scanf("%d", &num);
    
    for(i = 1; i <= num; i++){
        fact *= i;
    }
    
    printf("\nFactorial of %d is %d", num, fact);
    
    return 0;
}


//Program to find Factorial of number using while loop

#include <stdio.h>

int main()
{
    int i,num;
    int fact = 1;
    
    printf("Enter Number : ");
    scanf("%d", &num);
    
    i = 1;
    
    while(i <= num)
    {
        fact *= i;
        i++;
    }
    
    printf("\nFactorial of %d is %d", num, fact);
    
    return 0;
}


//Program to find Factorial of number using do - while loop

#include <stdio.h>

int main()
{
    int i,num;
    int fact = 1;
    
    printf("Enter Number : ");
    scanf("%d", &num);
    
    i = 1;
    
    do{
        fact *= i;
        i++;
    }
    while(i <= num);
    
    printf("\nFactorial of %d is %d", num, fact);
    
    return 0;
}


//Fibonacci Series Program using while loop

#include <stdio.h>

int main()
{
    int i,n;
    int first = 1, second = 1, third;
    
    printf("Enter limit : ");
    scanf("%d", &n);
    
    printf("%d ", first);
    printf("%d ", second);

    
    i = 2;
    while(i < n)
    {
        third = first + second;
        first = second;
        second = third;
        i++;
        printf("%d ", third);
    }

    
    return 0;
}


//Palindrome Program

#include <stdio.h>

int main()
{
    int i,num, original;
    int rev = 0, rem;
    
    printf("Enter Number : ");
    scanf("%d", &num);
    
    original = num;
    
    while(num > 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    
    if(rev == original)
    {
        printf("%d is a Palindrome number", original);
    }
    else
    {
         printf("%d is not a Palindrome number", original);
    }

    
    return 0;
}
