
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
