// array runtime initialization

#include <stdio.h>

int main()
{
    
    //initializing array with size 5
    int a[5]; 
    int i;
    
    printf("Enter 5 Numbers : "); 
    
    //loop for getting input
    for( i = 0; i < 5; i++){ 
        scanf("%d", &a[i]);
    }
    
    
    printf("Numbers you entered is : \n"); 
    
    //loop for output
    for(i = 0; i < 5; i++){ 
        printf("%d \n", a[i]);
    }

    return 0;
}

// Program to get marks of 5 students and find sum and average

#include <stdio.h>
#define N 5 //defining value of N as 5

int main()
{
    //initialization
    int marks[N], sum = 0, i;
    float avg;
    
    // Getting marks
    printf("\nEnter Marks of 5 students : ");
    for(i = 0;i < N; i++){
        scanf("%d", &marks[i]);
    }
    
    //calculating sum
    for(i = 0;i < N; i++){
        sum = sum + marks[i];
        
    }
    
    //calculating average
    avg = sum / 2;
    
    printf("Sum of Marks of student are : %d\n", sum);
    printf("Average Marks of student are : %f\n", avg);

    return 0;
}

// Read array of 10 integers and count total no. of even and odd elements

#include <stdio.h>
#define N 10 //defining size of array as 1

int main()
{
    //initialization
    int a[N], i;
    int even = 0, odd = 0;
    
    
    // Getting integers
    printf("\nEnter 10 integers : ");
    for(i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    
    
    //calculating sum
    for(i = 0; i < N; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
    }
    
    //printing
    
    printf("Total no of odd numbers : %d\n", odd);
    printf("Total no of even numbers : %d\n", even);

    return 0;
}

