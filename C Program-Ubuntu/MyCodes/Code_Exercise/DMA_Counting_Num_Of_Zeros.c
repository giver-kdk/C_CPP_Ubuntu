/*This program counts the number of elements that are zero in a 2D Array while using Dynamic Memory Allocation.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i, j, *ptr, **ptr2;
    printf("Enter the dimension of array: ");
    scanf("%d%d", &a, &b);
    ptr = malloc(b * sizeof(int));
    ptr2 = malloc(a * sizeof(int *));
    for(i = 0; i < a; i++)
    {
        for(j = 0; j < b; j++)
        {
            *(*(ptr2 + i) + j) = *((ptr + i) + j); 
        }
    }
    for(i = 0; i < a; i++)
    {
        for(j = 0; j < b; j++)
        {
            printf("%d\t", *(*(ptr2 + i) + j));
        }
        printf("\n");
    }
}