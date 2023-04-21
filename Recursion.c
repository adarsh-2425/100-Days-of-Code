//Recursion in C
#include <stdio.h>

void display(int n)
{
    if (n < 1)
        return;
    else
    {
        printf("%d ", n);
        display(n-1);
        printf("%d ", n);
    }
}
int main()
{
    int n = 5;
    display(5);
}


//Sum of N natural numbers using recursion
#include <stdio.h>

int sum(int x)
{
    int s = 0;
    
    if(x == 0)
        return x;
    else
    {
        s = x + sum(x-1);
        return s;
    }
}

void main()
{
    int n = 3;
    printf("%d", sum(n));
}


//Factorial of a number using indirect recursion
#include <stdio.h>

int fun1(int);
int fun2(int);

void main()
{
    printf("%d", fun1(5));
}

int fun1(int n)
{
    if(n <= 1)
        return 1;
    else
        return n * fun2(n-1);
}

int fun2(int n)
{
    if(n <= 1)
        return 1;
    else
        return n * fun1(n-1);
}


//Factorial of a number using direct recursion
#include <stdio.h>

int fun1(int);


void main()
{
    printf("%d", fun1(5));
}

int fun1(int n)
{
    if(n <= 1)
        return 1;
    else
        return n * fun1(n-1);
}



//Tail Recursion

#include <stdio.h>

void print(int a)
{
    if(a < 1) 
        return;
    else
    {
        printf("%d ", a);
        print(a/2);
    }
}

int main()
{
    print(10);
}


//Non - Tail Recursion

#include <stdio.h>

void print(int a)
{
    if(a < 1) 
        return;
    else
    {
        printf("%d ", a);
        print(a/2);
        printf("%d ", a);
    }
}

int main()
{
    print(10);
}
