//Program to print matrix and calculate sum

#include <stdio.h>

int main()
{
    int row = 2, col =3, i, j;
    int mat1[row][col], sum = 0;
    
    printf("Enter Matrix : ");
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            
            scanf("%d", &mat1[i][j]);
            
        }
    }
    
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            
            printf("%d\t", mat1[i][j]); // ""\t" for tab space
            
            sum = sum + mat1[i][j];
        }
        
        printf("\n");
    }
    
    printf("\nSum of matrix is : %d", sum);
 
    return 0;
}