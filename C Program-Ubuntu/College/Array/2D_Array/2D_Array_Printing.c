/*This program prints the elements of 2D array*/
#include <stdio.h>

int main()
{
    int i, j, a[2][3] = {1, 2, 3, 4, 5, 6};            //[2] = row and [3] = column
    printf("Elements in the array is:\n");
    for(i = 0; i < 2; i++)                          //Iteration for row
    {
        for(j = 0; j< 3; j++)                       //Iteration for column
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");                               //New line after every complete row
    }
}