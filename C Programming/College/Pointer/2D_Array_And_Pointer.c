#include <stdio.h>

int main()
{
    int i, j;
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    printf("Array Element\t\tValue\t\tAddress\n");
    for( i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            // printf("a[%d][%d]\t\t\t%d\t\t%u\n", i, j, a[i][j], &a[i][j]);
            printf("a[%d][%d]\t\t\t%d\t\t%u\n", i, j, *(*(a + i) + j), *(a + i) + j);       //Pointer Arithmetic
        }
    }
}