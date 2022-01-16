#include <stdio.h>
#include <conio.h>

/*This program shows array has garbage value when not initialized*/
void main()
{
    int i;
    int a[10];  

    printf("Array number is: \n");
    for(i=0; i<=9; i++)
    {
        printf("a[%d] = %d is located at\t %u\n",i, a[i], &a[i]);         //Array Output and Address
    }

}