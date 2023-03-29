//Basic if-else condition program

#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter Number : ");
    scanf("%d", &num);
    
    //if condition
    if(num < 10){
        printf("Number lesser than 10");
    }
    
    //else condition
    else{
        printf("Number greater than 10");
    }

    return 0;
}