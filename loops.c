
//For looop to print number upto 25


#include <stdio.h>

int main()
{
    int i;
    for ( i = 1; i <= 25; i++){
        printf("%d\n", i);
    }
        
    
    return 0;
}

//program to print table of a number using for loop

#include <stdio.h>

int main()
{
    int num, result, i;
    
    printf("Enter Number : ");
    scanf("%d", &num);
    
    for(i = 1; i <=12; i++){
         result = num * i;
         printf("%d * %d = %d \n", i, num, result);
    }
      
    return 0;
}

//print 5 stars

#include <stdio.h>

int main()
{
    for(int i = 0; i < 5; i++){
        printf("*");
    }

    return 0;
}

//print 5 stars using nested for loop

#include <stdio.h>

int main()
{
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


//Basic for Loop

#include <stdio.h>

int main()
{
    int arr[5];
    int i;
    
    printf("Enter Numbers : ");
    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    
     for(i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}


//Basic Basic while Loop

#include <stdio.h>

int main()
{
    int arr[5];
    int i = 0; //always initialize values before using them on while
    
    printf("Enter Numbers : ");
    
    while(i < 5) //condition
    {
        scanf("%d",&arr[i]);
        
        i++; //incrementing i
    }
    
    for(i = 0; i < 5; i++){
            printf("%d ", arr[i]);
    }
    
    return 0;
}



//Basic program to show use of nested for Loops

#include <stdio.h>

int main()
{
    int i, j; 
    
    for(i = 0; i < 5; i++)
    {
        printf("\t");
        
        for(j = 0; j < 5; j++)
        {
            printf("*");
        }
         printf("\n");
    }
    
    return 0;
}
