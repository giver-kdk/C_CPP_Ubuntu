/*This program takes user input for 2D Array and prints the elements*/
#include <stdio.h>
#define row 3
#define col 3

int main()
{
    int array[row][col], i, j;
    printf("Enter the elements of %d by %d matrix:\n", row, col);
    for(i = 0; i < row; i++)                //Loop to meet every row elements
    {
        for(j = 0; j < col; j++)            //Loop to meet every column elements
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("The elements of array are:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
}