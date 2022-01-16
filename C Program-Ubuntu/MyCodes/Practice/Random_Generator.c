#include <stdio.h>
#include <conio.h>
#include <stdlib.h>         //standard library for 'srand' and 'rand' functions used below
#include <time.h>           //library for 'time' function used below

//This program generates random number(0 to 32767) upto 5 times.

void main()
{
    int i;
    srand(time(0));         //'srand' initializes 'rand'
                            //It's used to specify seed value. 'time(0)' used as seed (which changes everytime)
    for (i=1; i<=5; i++)        //increments value of 'i' by 1 upto 4 times 
                                //initial 'i' value is also counted
    {
        printf("\n%d", rand());     //prints random number generated from 'srand' seeds value
    }
}
