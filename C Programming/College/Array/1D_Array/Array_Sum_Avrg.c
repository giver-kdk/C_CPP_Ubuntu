#include <stdio.h>
#include <conio.h>

void main()
{
    int average, sum=0, i;
    int array[10];      //Array of 10 elements of index 0, 1, 2, ...., 9
    for(i=0; i<=9; i++) 
    {
        printf("Enter value: ");
        scanf("%d", &array[i]);
    }
    for(i=0; i<=9; i++)
    {
        sum= sum+ array[i];
    }
    average= sum/10;
    printf("Sum is %d\n", sum);
    printf("Average is %d", average);
}