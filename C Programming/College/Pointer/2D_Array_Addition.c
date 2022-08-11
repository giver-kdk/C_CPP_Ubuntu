/*This program adds two Arrays using Pointer Arithmetics*/
#include <stdio.h>
#define row 2
#define col 3

int main()
{
    int i , j;
    int array1[row][col], array2[row][col], sum[row][col];
    //Input 1st Array
    printf("Enter elemenst for 1st %d by %d Array Elements:\n", row, col);
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", *(array1 + i) + j);         //*(array1 + i) + j) = &array1[i][j]
        }
    }
    //Output 1st Array
    printf("Elements of 1st Array is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", *(*(array1 + i) + j));       //*(*(array1 + i) + j)) = array1[i][j]
        }
        printf("\n");
    }
    //Input 2nd Array
    printf("Enter elemenst for 2nd %d by %d Array Elements:\n", row, col);
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", *(array2 + i) + j);
        }
    }
    //Output 2nd Array
    printf("Elements of 2nd Array is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", *(*(array2 + i) + j));
        }
        printf("\n");
    }
    //Add two Arrays
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            *(*(sum + i) + j) = *(*(array1 + i) + j) + *(*(array2 + i) + j);     //sum[i][j] = array1[i][j] + array2[i][j]
        }
    }
    //Output Sum
    printf("Sum of two Array is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", *(*(sum + i) + j));
        }
        printf("\n");
    }
}
