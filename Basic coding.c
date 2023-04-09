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

// Program to check whether a Number is a Palindrome using for loop

#include <stdio.h>

int main()
{
    int i, num, rem, rev = 0;
    
    printf("Enter Number : ");
    scanf("%d", &num);
    
    for(i = num; i > 0; i = i / 10 )
    {
        rem = i % 10;
        rev = (rev * 10) + rem;
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

// Program to find Sum of Digits of a Number

#include <stdio.h>

int main()
{
    int i, num, rem, sum = 0;
    
    printf("Enter Number : ");
    scanf("%d", &num);
    
    i = num;
    
    while(i != 0)
    {
        rem = i % 10;
        sum += rem;
        i = i / 10;
    }
    
    printf("Sum of %d is %d", num, sum);
    
}

//Program to reverse a String

#include <stdio.h>

int main()
{
    char str[20], rev[50];
    int i, j, count = 0;
    
    printf("Enter a string  : ");
    scanf("%s", str);
    
    printf("Before reverse : %s", str);
    
    //calculating length of string
    
    while(str[count] != '\0')
    {
        count++;
    }
    
    j = count -1;
    
    //reversing

    for(i=0; i<count; i++)
    {
        rev[i] = str[j];
        j--;
    }
    
    printf("\nAfter reverse : %s", rev);
}


//Find ASCII Value of Character

#include <stdio.h>

int main()
{
    char ch;
    
    printf("Enter character : ");
    scanf("%c", &ch);
    
    printf("ASCII Value is %d", ch);
    
    return 0;
}



//Using gets() function

#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    
    printf("Enter String : ");
    gets(str);

    puts(str);
    
    return 0;
}



//Using If-Else

#include <stdio.h>

int main()
{
    int age;
    
    printf("Enter age : ");
    scanf("%d", &age);
    
    if(age >= 18)
    {
        printf("You can vote!");
    }
    else{
        printf("You can't vote");
    }
    
    return 0;
}



//Using Switch Case

#include <stdio.h>

int main()
{
    int day;
    
    printf("Enter Day Number : ");
    scanf("%d", &day);
    
    switch(day)
    {
        case 1 : printf("Sunday");
        break;
        
        case 2 : printf("Monday");
        break;
        
        case 3 : printf("Tuesday");
        break;
        
        case 4 : printf("Wednesday");
        break;
        
        default : printf("As a human, I'm too lazy to intrepret it.");
    }
    
    return 0;
}



//Checking for Vowel

#include <stdio.h>
#include <ctype.h> //to use tolower() function

int main()
{
    char ch, ch1;
    
    printf("Enter Character : ");
    scanf("%c", &ch);
    
    ch1 = tolower(ch); //converting uppercases to lowercase
    
    if(ch1 == 'a' || ch1 == 'e' || ch1 == 'i || ch1 == 'o' || ch1 == 'u')
    {
        printf("%c is a vowel", ch);
    }
    else
    {
        printf("%c is not a vowel", ch);
    }
    
    return 0;
}
       
       
//Reversing Case of Character

#include <stdio.h>
#include <ctype.h> //
int main()
{
    char ch, ch1;
    
    printf("Enter Character : ");
    scanf("%c", &ch);
    
    printf("\nBefore Reversing : %c", ch);
    
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("\nAfter Reversing : %c", ch + 32); //'A' + 32 = 'a'. common for all uppercases
    }
    else
    {
        printf("\nAfter Reversing : %c", toupper(ch)); //using toupper function to convert lowercase to uppercase
    }
    
    
    return 0;
}       
