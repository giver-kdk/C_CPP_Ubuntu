/*This program multiplies two Matrices using function call by name*/
#include <stdio.h>

int multiply_matrix(int a[10][10], int b[10][10], int product[10][10], int row, int col, int row_col);

int main()
{
    int i, j, row1, col1, row2, col2, row3, col3;
    printf("Enter the dimension of 1st Matrix: ");
    scanf("%d%d", &row1, &col1);
    printf("Enter the dimension of 2nd Matrix: ");
    scanf("%d%d", &row2, &col2);

    if(col1 == row2)
    {
        row3 = row1;
        col3 = col2;
        int matrix1[10][10], matrix2[10][10], multiple[10][10];
        printf("Enter the elements of first %d by %d Matrix: ", row1, col1);
        for(i = 0; i < row1; i++)
        {
            for(j = 0; j < col1; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
        }
        printf("The elements of first  Matrix is:\n");
        for(i = 0; i < row1; i++)
        {
            for(j = 0; j < col1; j++)
            {
                printf("%d\t", matrix1[i][j]);
            }
            printf("\n");
        }
        printf("Enter the elements of second %d by %d Matrix: ", row2, col2);
        for(i = 0; i < row2; i++)
        {
            for(j = 0; j < col2; j++)
            {
                scanf("%d", &matrix2[i][j]);
            }
        }
        printf("The elements of second  Matrix is:\n");
        for(i = 0; i < row2; i++)
        {
            for(j = 0; j < col2; j++)
            {
                printf("%d\t", matrix2[i][j]);
            }
            printf("\n");
        }

        multiply_matrix(matrix1, matrix2, multiple, row3, col3, col1);
        printf("The Multiplication of two Matrices is:\n");
        for(i = 0; i < row3; i++)
        {
            for(j = 0; j < col3; j++)
            {
                printf("%d\t", multiple[i][j]);
            }
            printf("\n");
        }

    }
}
int multiply_matrix(int a[10][10], int b[10][10], int product[10][10], int row, int col, int row_col)
{
    int i, j, k;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            product[i][j] = 0;
            for(k = 0; k < row_col; k++)
            {
                product[i][j] = product[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
}
