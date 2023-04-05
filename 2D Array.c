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

//Program to Multiply two matrices

#include <stdio.h>

int main()
{
    int row1, col1, row2, col2; //row 1 and col1 are for storing row and column value of matrix 1
    int sum, i, j, k;
    
    
    //Getting Row and Column of First Matrix
    printf("Enter Row and Column of First Matrix : ");
    scanf("%d%d", &row1, &col1);
    
    //Getting Row and Column of Second Matrix
    printf("Enter Row and Column of Second Matrix : ");
    scanf("%d%d", &row2, &col2);
    
    //checking if column of first matrix is equal to row of second Matrix
    //matrix multiplication can only be done if this condition is satisfied
    
    if(col1 != row2){
        printf("\nMultiplication is not possible!");
        printf("\nColumn of First Matrix Should be equal to row of second matrix");
        return 0;
    }
    
    else
    
    {
    
    int matrix1[row1][col1], matrix2[row2][col2], result[row1][col2];
    
    //Getting Matrix 1
    printf("Enter First Matrix\n");
    for(i = 0; i < row1; i++)
    for(j = 0; j < col1; j++){
        scanf("%d", &matrix1[i][j]);
    }
    
    //Getting Matrix 2
    printf("Enter Second Matrix\n");
    for(i = 0; i < row2; i++)
    for(j = 0; j < col2; j++){
        scanf("%d", &matrix2[i][j]);
    }
    
    //Multiplying
    for(i = 0; i < row1; i++){
        for(j = 0; j < col2; j++){
            sum = 0;
           for(k = 0; k < row2; k++)
           {
               sum += matrix1[i][k] * matrix2[k][j];
               result[i][j] = sum;
           }
        }
    }
    
    //printing first matrix
    printf("\nFirst Matrix\n");
    for(i = 0; i < row1; i++){
      for(j = 0; j < col1; j++){
        printf("%d\t", matrix1[i][j]);
        } 
        printf("\n");
    }
    
     //printing Second matrix
    printf("\nSecond Matrix\n");
    for(i = 0; i < row2; i++){
      for(j = 0; j < col2; j++){
        printf("%d\t", matrix2[i][j]);
        } 
        printf("\n");
    }
    
    //printing Result
    printf("\nMultiplication Result of Two Matrix\n");
    for(i = 0; i < row2; i++){
      for(j = 0; j < col1; j++){
        printf("%d\t", result[i][j]);
        } 
        printf("\n");
    }
    
    }
    
    return 0;
}

