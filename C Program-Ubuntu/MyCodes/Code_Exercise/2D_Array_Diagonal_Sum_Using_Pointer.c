/*This program calculates sum of diagonals of matrix by using pointer arithmetic wherever possible*/
#include <stdio.h>
#define row 3
#define col 3

int diagonal_sum(int matrix[row][col]);
int main()
{
    int i , j;
    int array[row][col];
    //Input Array
    printf("Enter the elements of %d by %d Matrix:\n", row, col);
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", *(array + i) + j);      //&array[i][j]
        }
    }
    //Output Array
    printf("The elements are:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", *(*(array + i) + j));    //array[i][j]
        }
        printf("\n");
    }
    diagonal_sum(array);
}
int diagonal_sum(int matrix[row][col])
{
    int i, j, sum = 0;
    for(i = 0; i < row; i++)
    {
        for( j = 0; j < col; j++)
        {
            if(i == j)
            {
                sum = sum + *(*(matrix + i) + j);   //sum = sum + matrix[i][j]
            }
        }
    }
    printf("Sum of the diagonal is %d", sum);
}