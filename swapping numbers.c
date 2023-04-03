//Program of Swapping two numbers in C Language

#include <stdio.h>

//Writing a function Using Temp Variable. So that I can call it in main function later. Main function is at the bottom.
int temp(int a, int b){
    
    int temp;
    
    temp = a;
    a = b;
    b = temp;
    
    printf("After Swapping a = %d and b = %d", a, b);
}

//without using temp ( Interviewers favourite. I once failed an interview because of this. lol)
int notemp(int a, int b){
    
    a = a + b; 
    b = a - b; 
    a = a- b;
    
    printf("After Swapping a = %d and b = %d", a, b);
}

//using XOR 
int xor(int a, int b){
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("After Swapping a = %d and b = %d", a, b);
}

//using multiplication and division
int mulanddiv(int a, int b){
    
    a = a * b;
    b = a / b;
    a = a / b;
    
    printf("After Swapping a = %d and b = %d", a, b);
}


//Main Function
int main()
{
    int a, b;
    
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("Before Swapping a = %d and b = %d\n", a, b);
    
    //calling function. write the number of corresponding function below. i used temp as example.
    
    temp(a,b);
    
    return 0;
}

