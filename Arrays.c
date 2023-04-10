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

//Program to Delete an Element from Array in C

#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i; 
    int position = 3;//delete array element in position 3
    
    for(i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    
    for(i = position-1; i <= 5-1; i++) //loop starting from position
    {
        arr[i] = arr[i+1]; //updating the location with next elements
        
    }
    

    printf("\n");
    
    for(i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

//Largest and Smallest Element in Array

#include <stdio.h>

int main()
{
    int arr[5];
    int i; 
    int num, large = 0, small = 0;
    
    for(i = 0; i < 5; i++){
        printf("Enter Element %d : ", i+1);
        scanf("%d", &arr[i]);
        
        if( arr[i] > large )
        {
            large = arr[i];
        }
        
        else
        {
            small = arr[i];
        }
    }
    
    for(i = 0; i <5; i++){
        printf("\t%d", arr[i]);
    }
    
    printf("\nLargest Element is %d", large);
    printf("\nSmallest Element is %d", small);

    return 0;
}

//Program to find Sum of N input Numbers using Array

#include <stdio.h>

int main()
{
    int arr[5]; //initia;lizing array size with 5
    int i; 
    int sum =0;
    
    for(i = 0; i < 5; i++){
        printf("Enter Element %d : ", i+1);
        scanf("%d", &arr[i]);
        
        sum += arr[i];
    }
    
    printf("\nArray Elements are : ");
    for(i = 0; i <5; i++){
        printf("\t%d", arr[i]);
    }
    
    printf("\nSum is %d", sum);

    return 0;
}

//Simple Program to Sort Array elements 
//using insertion sort

#include <stdio.h>

int main()
{
    int n = 5;
    int a[n]; //initializing array size with 5
    int i, j;
    int temp;
    
    for(i = 0; i < 5; i++){
        printf("Enter Element %d : ", i+1);
        scanf("\t%d", &a[i]);
    }
    
    printf("\nBefore Sorting : ");
    for(i = 0; i < 5; i++){
        printf("\t%d", a[i]);
    }
    
    //sorting using insertion sorting
    for(i = 1; i < n; i++){
        temp = a[i]; //assuming second element is sorted and storing iton temp
        j = i - 1; //initializing j with i-1.  i-1 is first element
        
        while(j >= 0 && a[j] > temp){ //if j greater than temp, right shift it,
            a[j+1] = a[j];
            j--;
        }
        
        a[j+1] = temp;
    }
    
    printf("\nAfter Sorting : ");
    for(i = 0; i < 5; i++){
        printf("\t%d", a[i]);
    }

    return 0;
}

// Simple Program to remove Duplicate Element in an Array
#include <stdio.h>

int removeDuplicates(int arr[], int n)
{
	if(n == 0 ||  n == 1)
	return n;
	
	int temp[n];
	int i, j = 0;
	
	for(i = 0; i < n-1; i++)
	    if(arr[i] != arr[i+1])
	        temp[j++] = arr[i];
	    
	temp[j++] = arr[n-1];
	
	for(i = 0; i < j; i++)
	    arr[i] = temp[i];
	    return j;
}

// Driver code
int main()
{
	int arr[] = { 1, 2, 2, 3, 4, 4, 4, 5, 6 };
	
	//sizeof(array) returns the number of bytes the array occupies
	//Since each element can take more than 1 byte of space, you have to divide the result with the size of one element (sizeof(array[0])).
	//This gives you number of elements in the array.
	int n = sizeof(arr) / sizeof(arr[0]);

	//returns new size of array.
	n = removeDuplicates(arr, n);

	// Print new array
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}


//Program to check whether a two dimensional array is a Sparse Matrix

#include <stdio.h>

int main()
{
    int row = 3, col = 3, count = 0;
    int i, j;
    int arr[row][col];
    
    //geting matrix
    printf("Enter Matrix : ");
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            {
                scanf("%d", &arr[i][j]);
                if(arr[i][j] == 0)
                {
                    count++;
                }
            }
            
    //printing matrix
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            printf("%d\t", arr[i][j]);
        }
    printf("\n");
    }
    
    // checking if the matrix is sparse or not
    if(count > (row * col) / 2)
    {
        printf("It's a Sparse Matrix");
    }
    else
    {
        printf("Not a sparse matrix");
    }
}


//Second Largest Element in Array
#include <stdio.h>

int main()
{
    int a[10], i;
    int big, sec;
    
    printf("Enter array elements : ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    
    big = a[0];
    
    for(i = 1; i <= 5; i++)
    {
        if(a[i] > big)
        {
            sec  = big;
            big = a[i];
        }
       
    }
    
    printf("\nSecond Largest : %d", sec);
    

    return 0;
}

