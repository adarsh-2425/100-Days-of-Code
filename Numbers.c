//Program to find average of N Numbers

#include <stdio.h>

int main()
{
    int n, i;
    float avg, x, sum = 0;
    
    printf("Enter limit : ");
    scanf("%d", &n);
    
    printf("\nEnter %d numbers \n", n);
    
    for(i = 0; i < n; i++){
        scanf("%f", &x);
        sum += x;
    }
    
    avg = sum / n;
    
    printf("Average of %d numbers is %f", n, avg);
}
