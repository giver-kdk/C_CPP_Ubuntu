/* Program to add two 3×2 matrices and print the result in matrix form*/
#include <stdio.h>
#include <conio.h>
#define row 3
#define col 2

int main()
{
    int i, j, matrix1[row][col], matrix2[row][col], addition[row][col];
    printf("Enter the elements of first %d by %d Matrix:\n", row, col);
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of second %d by %d Matrix:\n", row, col);
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &matrix2[i][j]);
            addition[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }    
  
    printf("The Addition of two Matrices is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", addition[i][j]);
        }
        printf("\n");
    }    
    getchar();
}