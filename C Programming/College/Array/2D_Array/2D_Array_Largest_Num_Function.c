/*This program prints the largest numbers from a 2D Array Matrix using Function Call by name*/
#include <stdio.h>
#define row 3
#define column 3

int largest_element(int a[row][column]);              
//----NOTE----Atleast 2nd dimensions(column) should be specified for 2D Array Argument unlike 1D Array
//----NOTE----Dimension of array in calling and array in called function should be same
int main()
{
    int i, j;

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

    largest_element(matrix);
}
int largest_element(int a[row][column])
{
    int i, j, largest;
    largest = a[0][0];
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)    
        {
            if(a[i][j] > largest)
            {
                largest = a[i][j];         //Updates largest number if found
            }
        }
    }
    printf("The Largest number is: %d", largest);
}