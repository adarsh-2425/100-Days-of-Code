//If-else operator

#include <stdio.h>

int main()
{
    int age;
    
    printf("What is your age? ");
    scanf("%d", &age);
    
    if(age > 18){
        printf("Let's go for a drink big guy!!");
    }
    else{
        printf("Go to home, kiddo!!");
    }

    return 0;
}

//vowel or consonant using switch

#include <stdio.h>

int main()
{
    char ch;
    
    printf("Enter character : ");
    scanf("%c", &ch);
    
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("%c is a vowel", ch);
        break;
        
        default:
            printf("Not a vowel");
    }


    return 0;
}

//vowel or consonant using if else

#include <stdio.h>

int main()
{
    char ch;
    
    printf("Enter character : ");
    scanf("%c", &ch);
    
    if ( ch == 'a' || ch == 'e' || ch == 'a' || ch == 'a' || ch == 'a'){
        printf("%c is a vowel", ch);
    }
    else{
        printf("Not a vowel");
    }

    return 0;
}


//Check Character is Lowercase or Uppercase or Special Character using switch case.


#include <stdio.h>

int main()
{
    char ch;
    printf("Enter character : ");
    scanf("%c", &ch);
    
    switch(ch){
        
        case 'A'...'Z':
            printf("%c is Uppercase", ch);
            break;
            
        case 'a'...'z':
            printf("%c is Lowercase", ch);
            break;
            
        case '0'...'9':
            printf("%c is a Number", ch);
            break;
        
        default:
            printf("Special Character");
    }
    
    return 0;
}


//Calculator using switch case.


#include <stdio.h>

int main()
{
    int num1, num2, result;
    char op;
    
    printf("Enter operator ( +, - , * , / ) : ");
    scanf("%c", &op);
    
    printf("Enter Operands  : ");
    scanf("%d %d", &num1, &num2);
    
    
    //switch statement starts
    switch(op){
        
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d", num1, num2, result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("%d - %d = %d", num1, num2, result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("%d * %d = %d", num1, num2, result);
            break;
            
        case '/':
            result = num1 / num2;
            printf("%d / %d = %d", num1, num2, result);
            break;
        
        default:
            printf("Invalid Operation");
    }
    
    return 0;
}

// While statement

#include <stdio.h>

int main()
{
    int num, i, sum = 0;
    
    for(i = 1; i <=3; i++){
        printf("Enter Positive Number : ");
        scanf("%d", &num);
        
        if(num < 0){
            continue; //go back to loop
        }
            sum = sum + i;

    }
    printf("%d \n", sum);

    return 0;
}

