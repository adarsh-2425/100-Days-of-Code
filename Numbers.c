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

//C Program to Check Armstrong Number

#include <stdio.h>

int main()
{
    int num, original, rem, result =0;
    
    printf("Enter Three Digit Number : ");
    scanf("%d", &num);
    
    original = num;
    
    while(num != 0){
        
        rem = num % 10; //Remainder contains last digit of number
        result += rem * rem * rem;
        num /= 10; //Removes last digit
    }
    
    if(result == original){
        printf("%d is a Armstrong  Number", original);
    }
    else{
         printf("%d is not a Armstrong  Number", original);
    }
}
