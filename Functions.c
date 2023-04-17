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

//accept char from function and call it in main fn and print

#include <stdio.h>

char cha(); //fn decalration

int main()
{
    char ch;
    ch = cha();
    printf("ch is %c", ch);
     //fn calling
}   
    
char cha() //fn definition
    {
        char c;
        printf("Enter char : ");
        scanf("%c", &c);
        return c;
    }


