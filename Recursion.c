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
