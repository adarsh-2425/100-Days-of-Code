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
