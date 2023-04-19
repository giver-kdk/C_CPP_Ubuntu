/*This program prints the largest numbers from a 2D Array Matrix*/
#include <stdio.h>
#define row 3
#define column 3
int main()
{
    int i, j, largest;

    int matrix[row][column];
    //Input Matrix Element
    printf("Enter the elements of %d by %d Matrix:\n", row, column);
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //Output Matrix Element
    printf("The Entered Matrix is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    //Find Largest Element
    largest = matrix[0][0];
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)    
        {
            if(matrix[i][j] > largest)
            {
                largest = matrix[i][j];         //Updates largest number if found
            }
        }
    }
    printf("The Largest number is: %d", largest);
}