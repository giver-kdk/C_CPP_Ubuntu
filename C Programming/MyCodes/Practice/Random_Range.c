#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

//This program prints random numbers between 10 and 20.

void main()
{
    int num, max= 20, min= 10;
    srand(time(0));                     //define 'srand' before calling 'rand'
    num= (rand() %(max-min+1))+min;     //formula for randomness between minimum and maximum number
    printf("%d", num);

}