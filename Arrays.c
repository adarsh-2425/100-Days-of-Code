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
