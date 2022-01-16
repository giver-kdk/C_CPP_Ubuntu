/*This program calculates the sum of elements of Left Diagonal of Matrix.*/
#include <stdio.h>
#define row 4
#define col 4

int main()
{
    int sum = 0, matrix[row][col], i, j;
    //Input Matrix
    printf("Enter the elements of Matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //Output Matrix
    printf("The entered Matrix is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    //Sum of Left Diagonal
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)          //Both 'i' and 'j' increments
        {
            if(i + j == row - 1)        //Condition for left diagonal(See Matrix Representation)
            {
                sum = sum + matrix[i][j];   //Only adds elements whose index sum = row - 1
            }
        }
    }
 
    printf("Sum of Left (Up Inclined Diagonal) is %d\t", sum);
}