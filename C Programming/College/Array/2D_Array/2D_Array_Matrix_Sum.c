/*This program calculates the sum of two 2D Array Matrices*/
#include <stdio.h>

int main()
{
    int i, j, row, col;
    //Matrix Dimension Input
    printf("Enter the dimension for Matrices: ");
    scanf("%d%d", &row, &col);
    //Matrix Element Input
    int matrix1[row][col], matrix2[row][col], sum[row][col];
    //Input Matrix Element
    printf("Enter the elements of 1st %d by %d Matrix:\n", row, col);
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    //Output Matrix Element
    printf("Enter the elements of 2nd %d by %d Matrix:\n", row, col);
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    //Sum of Matrices
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];      //Direct sum of corresponding matrix elements
        }
    }
    //Output Sum Matrix
    printf("Sum of two Matrices is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}