/*This program prints array elements and address using array name as pointer*/
#include <stdio.h>

int main()
{
    int i, array[5] = {10, 20, 30, 5, 8};
    printf("Array\t\tElements\tAddress\n");
    for(i = 0; i < 5; i++)
    {   //Array name acts as pointer 
        printf("array[%d]\t%d\t\t%u\n", i, *(array + i), array + i);        //Adding integer to array name means adding index number
    }
}