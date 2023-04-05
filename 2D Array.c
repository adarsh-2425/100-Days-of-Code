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

//Program to print transpose of a matrix

#include <stdio.h>

int main()
{
    int row = 2, col =3, i, j;
    int mat[row][col], transpose[row][col];
    
    //Getting Matrix
    printf("Enter Matrix : ");
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    // Transpose of Matrix
    for(i = 0; i < col; i++){
        for(j = 0; j < row; j++){
            transpose[i][j] = mat[j][i];
        }
        printf("\n");
    }
    
    //Printing Matrix 1
    printf("\nMatrix is\n");
     for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    
    //Printing Transpose of Matrix
    printf("\nTranspose of Matrix is\n");
     for(i = 0; i < col; i++){
        for(j = 0; j < row; j++){
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}

//Program to print sum of individual rows and columns

#include <stdio.h>

int main()
{
    int row = 3, col = 3, i, j, rowsum, colsum;
    int matrix[row][col];
    
    //Getting Matrix
    printf("Enter Matrix\n");
    for(i = 0; i < row; i++)
    for(j = 0; j < col; j++){
        scanf("%d", &matrix[i][j]);
    }
    
    //calculating sum of both row and col
    for(i = 0; i < row; i++){
        rowsum = colsum = 0;
        for(j = 0; j < col; j++){
            rowsum += matrix[i][j];
            colsum += matrix[j][i];
        }
        printf("Row %d Sum is %d and Col %d Sum is %d\n", i, rowsum, i, colsum);
    }
    
    return 0;
}

//Program to Add Two Matrice and Store it in Third Matrix

#include <stdio.h>

int main()
{
    int row = 3, col = 3, i, j, rowsum, colsum;
    int matrix1[row][col], matrix2[row][col], sumMatrix[row][col];
    
    //Getting Matrix 1
    printf("Enter First Matrix\n");
    for(i = 0; i < row; i++)
    for(j = 0; j < col; j++){
        scanf("%d", &matrix1[i][j]);
    }
    
    //Getting Matrix 2
    printf("Enter Second Matrix\n");
    for(i = 0; i < row; i++)
    for(j = 0; j < col; j++){
        scanf("%d", &matrix2[i][j]);
    }
    
    //calculating sum 
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    //printing first matrix
    printf("First Matrix\n");
    for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
        printf("%d\t", matrix1[i][j]);
        } 
        printf("\n");
    }
    
    //printing Second matrix
    printf("Second Matrix\n");
    for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
        printf("%d\t", matrix2[i][j]);
        } 
        printf("\n");
    }
    
    //printing Sum
    printf("Sum of Two Matrix\n");
    for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
        printf("%d\t", sumMatrix[i][j]);
        } 
        printf("\n");
    }
    
    return 0;
}
