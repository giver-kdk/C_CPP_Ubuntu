/*This program uses array of pointer to store addresses of array elements*/
#include <stdio.h>

int main()
{
    int i, array[] = {1, 2, 3, 4, 5};
    int *ptr[5];            //Array of Pointer
    for(i = 0; i < 5; i++)
    {
        ptr[i] = &array[i];
    }
    printf("Content Pointed are:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d\t", *ptr[i]);   
    }
}