/*This program adds the elements of matrices using 2D array*/
#include <stdio.h>

int main()
{
    int i, j, matrix1[2][3] = 
    {
        {1, 2, 3},
        {1, 2, 3}
    };
    int matrix2[2][3] = 
    {
        {1, 2, 3},
        {1, 2, 3}
    };
    int  matrix3[2][3] = 
    {
        {0, 0, 0},
        {0, 0, 0}
    };
    for(i = 0; i <= 1; i++)
    {
        for(j = 0; j <= 2; j++)
        {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Sum of the matrices is:\n");
    for(i = 0; i <= 1; i++)
    {
        for(j = 0; j <= 2; j++)
        {
            printf("%d\t", matrix3[i][j]);
        }
        printf("\n");
    }
}