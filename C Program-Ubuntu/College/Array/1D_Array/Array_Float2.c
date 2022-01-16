#include <stdio.h>
#include <conio.h>

void main()
{
    int n=10, i;
    int marks[10]= {10, 20, 30, 1, 20};      // marks[]

    printf("The number is: \n");
    for(i=0; i<=n; i++)
    {
        printf("a[%d] = %d is located at\t %u\n",i, marks[i], &marks[i]);         //Array Output and Address
    }

}