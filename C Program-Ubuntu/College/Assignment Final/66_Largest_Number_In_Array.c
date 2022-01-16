/* Write a program to display largest and smallest number among 10 numbers stored in an array.*/
#include <stdio.h>
#include <conio.h>

void main()
{
    int i, largest, smallest, number[10];
    printf("Enter 10 numbers: \n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &number[i]);
    }
    largest = number[0];                
    smallest = number[0];              	      //Assign an element from array

    for(i = 0; i < 10; i++)
    {
        if(number[i] > largest)         		//Compares all elements with 'largest'
        {
            largest = number[i];
        }
    }

    for(i = 0 ; i < 10; i++)
    {
        if(number[i] < smallest)                 //Compares all elements with 'smallest'
        {
            smallest = number[i];
        }
    }
    printf("The largest number is %d\n", largest);
    printf("The smallest number is %d", smallest);
    getchar();
}