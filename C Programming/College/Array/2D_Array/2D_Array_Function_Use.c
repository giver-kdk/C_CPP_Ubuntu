/*This program prints the 2D Array elements using function call by name.
NOTE: The dimension of actual array in calling function and formal array in 
called function should be same*/
#include <stdio.h>
#define row 3
#define col 2

int increment_array(int b[][col]);
int display_array(int a[][col]);
int  main()
{
    int i, j, array[row][col];
    printf("Enter the elements of array:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    increment_array(array);

    display_array(array);       //Here, argument is actual argument
    //Print the actual array
    printf("The Array Matrix is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", array[i][j]);        //This shows array itself is manipulated
        }
        printf("\n");
    }
}
int display_array(int a[][col])  //Here, argument is formal argument
{
    int i , j;
    printf("The Array Matrix is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
int increment_array(int b[][col])
{
    int i, j;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            b[i][j] = b[i][j] + 1;
        }
    }
}