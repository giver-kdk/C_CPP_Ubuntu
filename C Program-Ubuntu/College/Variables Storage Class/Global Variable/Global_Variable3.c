#include <stdio.h>

int i;                          //Defining global variable

int increment();
int decrement();

void main()
{
    printf("Value of i is; %d", i);
    increment();
    increment();
    decrement();
    decrement();
}

int increment()
{
    i=i+1;
    printf("Value of i is; %d", i);
}
int decrement()
{
    i=i-1;
    printf("Value of i is; %d", i);
}