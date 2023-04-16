// Function to add two numbers

#include <stdio.h>

//sum Function
void sum() //function definition
{
   int a, b, sum = 0;
   
   printf("Enter two numbers : ");
   scanf("%d %d", &a, &b);
   
   sum = a + b;
   
   printf("%d + %d = %d", a, b, sum);
}

int main()
{
    sum(); //calling function
}
