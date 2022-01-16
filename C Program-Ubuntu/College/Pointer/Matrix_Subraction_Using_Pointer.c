/*This program subtracts ywo matrices using pointer arithmetics*/
#include <stdio.h>
#define row 3
#define col 3

int subtract_matrix(int (*mat1)[col], int (*mat2)[col], int (*difference)[col]);
int main()
{
    int i, j, matrix1[row][col], matrix2[row][col], subtract[row][col];
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

    subtract_matrix(matrix1, matrix2, subtract);
    //Output Matrice Subtraction
    printf("Difference of two Matrices is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", *(*(subtract + i) + j));
        }
        printf("\n");
    }
}
int subtract_matrix(int (*mat1)[col], int (*mat2)[col], int (*difference)[col])
{
    int i, j;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            *(*(difference + i) + j) = *(*(mat1 + i) + j) - *(*(mat2 + i) + j);     //difference[i][j] = mat1[i][j] - mat2[i][j]
        }
    }
}
