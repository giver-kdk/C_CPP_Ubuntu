/*This program calculates product of two matrices using pointer arithmetic*/
#include <stdio.h>
#define row 3
#define col 3

int matrix_multiply(int (*mat1)[col], int (*mat2)[col], int (*multiple)[col]);      //*(mat)[col] = pointer to array 'mat1' of 'col' size
int main()
{
    int i, j, matrix1[row][col], matrix2[row][col], product[row][col];
    //Input 1st Matrix
    printf("Enter the elements of 1st Matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", *(matrix1 + i) + j);
        }
    }
    //Output 1st Matrix
    printf("Entered elements of 1st Matrix is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", *(*(matrix1 + i) + j));
        }
        printf("\n");
    }
    //Input 2nd Matrix
    printf("Enter the elements of 2nd Matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", *(matrix2 + i) + j);
        }
    }
    //Output 2nd Matrix
    printf("Entered elements of 2nd Matrix is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", *(*(matrix2 + i) + j));
        }
        printf("\n");
    }

    matrix_multiply(matrix1, matrix2, product);
    //Output Product
    printf("Product of two Matrices is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", *(*(product + i) + j));
        }
        printf("\n");
    }
}
int matrix_multiply(int (*mat1)[col], int (*mat2)[col], int (*multiple)[col])
{
    int i, j, k;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            *(*(multiple + i) + j) = 0;
            for(k = 0; k < row; k++)
            {
                *(*(multiple + i) + j) += (*(*(mat1 + i) + k)) * (*(*(mat2 + k) + j));      //multiple[i][j] += mat1[i][k] * mat2[k][j]
            }
        }
    }
}
