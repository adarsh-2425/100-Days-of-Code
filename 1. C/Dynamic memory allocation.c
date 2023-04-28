//malloc

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n = 5, *ptr;
    
    ptr = (int *) malloc(n * sizeof(int));
    
    printf("Enter values: \n");
    for(i = 0; i < n; i++)
        scanf("%d ", (ptr + i));
        
    for(i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
        
    free(ptr);
}


//calloc

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n = 5, *ptr;
    
    ptr = (int *) calloc(n, sizeof(int));
    
    printf("Enter values: \n");
    for(i = 0; i < n; i++)
        scanf("%d ", (ptr + i));
        
    for(i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
        
    free(ptr);
}
