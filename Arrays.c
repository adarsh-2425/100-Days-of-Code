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

// Read two arrays of size 5 and store the sum of these arrrays into third array

#include <stdio.h>
#define N 5 //defining size of array as 5

int main()
{
    //initialization
    
    int arr1[N], arr2[N], sumArr[N];
    int i;
    
    
    // Getting first array
    
    printf("\nEnter Array 1 elements : ");
    for(i = 0; i < N; i++)
    {
        scanf("%d ", &arr1[i]);
    }
    
    // Getting second array
    
    printf("\nEnter Array 2 elements : ");
    for(i = 0; i < N; i++)
    {
        scanf("%d ", &arr2[i]);
    }
    
    
    //calculating sum of two arrays and storing on 3rd array
    
    for(i = 0; i < N; i++)
    {
     sumArr[i] = arr1[i] + arr2[i];
    }
    
    //printing array 1
    
    printf("\nArray 1 elements : ");
    for(i = 0; i < N; i++){
        printf("%d ", arr1[i]);
    }
    
    //printing array 2
    
    printf("\nArray 2 elements : ");
    for(i = 0; i < N; i++){
        printf("%d ", arr2[i]);
    }
    
    //printing array 3

    printf("\nSum of elements : ");
    for(i = 0; i < N; i++){
        printf("%d ", sumArr[i]);
    }

    return 0;
}

//Program to print the reverse of an Array

#include <stdio.h>

int main()
{
    int arr[10];
    int i;
    
    printf("Enter 5 Elements : \n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Before Reversing : \n");
     for(i = 0; i < 5; i++)
    {
        printf("\t%d ", arr[i]);
    }
    
    printf("\nAfter Reversing : \n");
     for(i = 5-1; i >= 0; i--)
    {
        printf("\t%d ", arr[i]);
    }

    return 0;
}

//Program to insert an element in an Array

#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int i, position = 3, value = 9;
    
    for(i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    
    for(i = 10-1; i >= position-1; i--){
        arr[i + 1] = arr[i]; //right shifting array elements
    }
    
    arr[position-1] = value;
    
    for(i = 0; i < 10; i++){
        printf("\n\t%d ", arr[i]);
    }

    return 0;
}

