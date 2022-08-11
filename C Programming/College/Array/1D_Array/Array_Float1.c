#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    float a[10]= {20, 0, 5.6, 100, 102.10};  

    printf("Entered number is: \n");
    for(i=0; i<=4; i++)
    {
        printf("a[%d] = %.3f is located at\t %u\n",i, a[i], &a[i]);         //Array Output and Address
    }

}