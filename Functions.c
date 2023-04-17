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


//No Argument No Return Type

#include <stdio.h>

void sum(void);

void main()
{
    sum();

}

void sum()
{
    int a = 5, b = 10, sum = 0;
    printf("sum is %d", a + b);
}



//No Argument No Return Type sum, subttraction, multiplication and division

#include <stdio.h>

void sum(void);
void sub(void);
void mul(void);
void divi(void);

void main()
{
    sum();
    sub();
    mul();
    divi();

}

//function for sum
void sum() 
{
    int a = 15, b = 10, sum = 0;
    printf("\n%d + %d = %d", a, b, a + b);
}

//function for subtraction
void sub()
{
    int a = 15, b = 10, sum = 0;
    printf("\n%d - %d = %d", a, b, a - b);
} 

//function for multiplication
void mul()
{
    int a = 15, b = 10, sum = 0;
    printf("\n%d * %d = %d", a, b, a * b);
}

//function for division
void divi()
{
    int a = 15, b = 10, sum = 0;
    printf("\n%d / %d = %d", a, b, a / b);
}



//No Argument with Return Type

#include <stdio.h>

int sum(void);

void main()
{
    int s;
    s = sum();
    printf("%d", s);
}

//function for sum
int sum() 
{
    int a = 15, b = 10, sum = 0;
    return a + b;
}


//With Argument without Return Type

#include <stdio.h>

float sum(float, float);

void main()
{
    sum(5.1, 6.1);
}

//function for sum
float sum(float a, float b) 
{
    printf("%f", a + b);
}
