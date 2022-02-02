/*This program calculates the sum of elements of Left Diagonal of Matrix.*/
#include <stdio.h>
#define row 4
#define col 4

int main()
{
    int sum = 0, matrix[row][col], i, j;
    //Input Matrix Elements
    printf("Enter the elements of %d by %d Matrix:\n", row, col);
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //Output Matrix Element
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
        for(j = row - 1; j >= 0; j--)       //'j' decrements when 'i' increments(In Matrix Representation)
        {
            
            sum = sum + matrix[i][j];      //Only adds left diagonal elements
            i++;
        }
    }
   
    printf("Sum of Left (Up Inclined) Diagonal is %d\t", sum);
}