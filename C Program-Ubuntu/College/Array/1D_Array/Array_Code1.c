#include <stdio.h>
#include <conio.h>

/*This program shows that memory location of array is in sequence*/
void main()
{
    int i;
    int a[10];  
    printf("Enter 10 numbers: ");  
    for(i=0; i<=9; i++)
    {
        scanf("%d", &a[i]);         //Array Input
    }
    printf("Entered number is: \n");
    for(i=0; i<=9; i++)
    {
        printf("a[%d] = %d is located at\t %u\n",i, a[i], &a[i]);         //Array Output and Address
    }

}