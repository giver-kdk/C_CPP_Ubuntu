/*This program adds two matrices using function call by name.
----NOTE----Dimension of array in calling and array in called function should be same
*/
#include <stdio.h>
#define row 3
#define col 3

int matrix_addition(int array1[row][col], int array2[row][col], int sum[row][col]);

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
    printf("The First Matrix is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }    
    printf("Enter the elements of second %d by %d Matrix:\n", row, col);
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }    
    printf("The Second Matrix is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }    
    matrix_addition(matrix1, matrix2, addition);
    
    printf("The Addition of two Matrices is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", addition[i][j]);
        }
        printf("\n");
    }    
    
}
int matrix_addition(int array1[row][col], int array2[row][col], int sum[row][col])
{
    int i, j;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }
}
