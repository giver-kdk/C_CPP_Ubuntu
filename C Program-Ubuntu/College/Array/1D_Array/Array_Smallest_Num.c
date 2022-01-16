#include <stdio.h>
#include <conio.h>

/*This program prints the smallest number inside array*/

void main()
{
    int i, smallest, number[5];
    printf("Enter any 5 numbers: \n");
    for(i=0; i<=4; i++)
    {
        scanf("%d", &number[i]);
    }
    smallest= number[0];                        //Assign an element from array

    for(i=0; i<=4; i++)
    {
        if(number[i] < smallest)                 //Compares all elements with 'largest'
        {
            smallest= number[i];
        }
    }
    printf("The smallest number is %d", smallest);
}