//Program to reverse the case of input character

#include <stdio.h>
#include <ctype.h> //to use lower and upper functions

int main()
{
    
    char a;

    printf("Enter an alphabet : ");
    putchar('\n');  // to move to next Line
    
    a = getchar(); //getchar is used to get a single a character


    if(islower(a)) //checking if char is lowercase
    {
        putchar(toupper(a)); //if lowercase, converting to uppercase and printing with putchar
    }
    else
    {
        putchar(tolower(a)); //if uppercase, converting to lowercase and printing
    }

    return 0;

}

//Program to print the Largest and Smallest using Global Declaration

#include <stdio.h>

void main(){
    
    int a, b;
    
    printf("Enter Two Numbers : ");
    scanf("%d %d", &a, &b);
    
    if (a == b){
        printf("%d and %d are same", a, b);
    }
    else if(a > b){
        printf("%d is larger than %d", a, b);
    }
    else{
        printf("%d is larger than %d", b, a);
    }
}

//Program to find factorial of a number

#include <stdio.h>

void main(){
    
    int i, n;
    long int fact =1;
    
    printf("Program to find factorial of a number\n");
    
    printf("Enter Number : ");
    scanf("%d", &n);
    
    for( i = 1; i <= n; i++){
        fact *= i; //same as fact = fact * i
    }
    
    printf("Factorial of %d is %ld", n, fact);
}

// Program to check whether a Number is a Palindrome using while loop

#include <stdio.h>

int main()
{
    int i, num, rem, rev = 0;
    
    printf("Enter Number : ");
    scanf("%d", &num);
    
    i = num;
    
    while(i > 0)
    {
        rem = i % 10;
        rev = (rev * 10) + rem;
        i = i / 10;
    }
    
    if (num ==  rev)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}
