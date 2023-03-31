//If operator

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
