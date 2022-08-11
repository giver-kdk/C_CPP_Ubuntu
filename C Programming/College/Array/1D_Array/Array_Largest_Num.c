#include <stdio.h>
#include <conio.h>

/*This program prints the largest number inside array*/
void main()
{
    int i, largest;
    int number[5];
    printf("Enter 5 numbers: \n");
    for(i=0; i<=4; i++)
    {
        scanf("%d", &number[i]);
    }
    largest= number[0];                 //assign any array element to 'largest'

    for(i=0; i<=4; i++)
    {
        if(number[i] > largest)         //Compares all elements with 'largest'
        {
            largest= number[i];
        }
    }
    printf("The largest number is %d", largest);
    getchar();
}