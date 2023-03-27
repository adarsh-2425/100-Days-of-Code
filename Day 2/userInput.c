// Program to take input of various data types in c

#include <stdio.h>
int main(){
    
    int num1, num2;
    float fraction;
    char character;

    // Taking Integer as Input from User
    printf("Enter Two Integers : \n");
    scanf("%d %i", &num1, &num2);
    printf("\n\nEntered  Integers are : %d and %d\n\n", num1, num2);

    // Taking Fraction as Input from User
    printf("Enter fraction : \n\n");
    scanf("%f", &fraction);
    printf("\n\nEntered fraction is : %f\n\n", fraction);

    // Taking Character as input from the user
    printf("Enter Character : \n");
    scanf("%c", &character);
    printf("\n\nEntered Character is : %c\n\n", character);

}