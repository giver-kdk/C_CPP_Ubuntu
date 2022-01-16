/*This program displays the sum of all elements of 2D Array.*/
#include <stdio.h>
#define row 3 
#define col 3

int main()
{
    int i, j, array[row][col], sum = 0;
    printf("Enter the elements of %d by %d Matrix:\n", row, col);
    //Array Elemnet Input
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    //Array Element Output
    printf("The elements of array are:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    //Sum of all Array Elements
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            sum = sum + array[i][j]; 
        }
    }
    printf("Sum of the array elements is: %d", sum);
}