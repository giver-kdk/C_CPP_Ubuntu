#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

//This program generates random number from 0 to 50.

void main()
{
    int num;
    srand(time(0));
    num= rand() %50;       //'% 50' divides generated random by 50 and remainder is 0 to 49. 'num' is ([0 to 49] +1)
                                                                                    //i.e; 'num' ranges from 0 to 50
    printf("%d", num);
}