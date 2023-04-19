#include <stdio.h>
#include <conio.h>

/*This program shows array stores 0 when atleast one element is defined*/
void main()
{
    int i;
    int a[10]= {10, 20, 30};  

    printf("Entered number is: \n");
    for(i=0; i<=9; i++)
    {
        printf("a[%d] = %d is located at\t %u\n",i, a[i], &a[i]);         //Array Output and Address
    }

}