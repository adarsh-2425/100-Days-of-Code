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



//With Argument without Return Type
//even or odd
#include <stdio.h>

int number(int);

void main()
{
    number(10);
}

//function for sum
int number(int a)
{
    if(a % 2 == 0)
    {
        printf("%d is even", a);
    }
    else
    {
        printf("%d is odd", a);
    }
}



// Function With Argument and Return Type
#include <stdio.h>

int sum(int, int);

int main()
{
    int result;
    
    result = sum(5, 6);
    
    printf("%d", result);
}

int sum(int a, int b)
{
    return a + b;
}


//Passing Array as an Argument to a Function
//finding average
#include <stdio.h>

float avg(int [], int);

int main()
{
    int marks[5] = {1, 2, 3, 4, 5};
    float average;
    
    average = avg(marks, 5);
    printf("%f", average);
}

float avg(int marks[], int n)
{
    int i, sum = 0;
    float average = 0;
    for(i = 0; i < n; i++)
    {
        sum += marks[i];
    }
    average = sum / n;
    return average;
}



//Passing String as an Argument to a Function
//finding length of a string
#include <stdio.h>

int length(char []);

int main()
{
    char str[5] = "Lol";
    int len;
    len = length(str);
    printf("%d", len);
}

int length(char str[])
{
    int i, length = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}



//Return a String from a Function in C
#include <stdio.h>

char *display();

void main()
{
    char *str;
    str = display();
    printf("%s", str);
}

char *display()
{
    static char str[] = "lol";
    return str;
}
