#include <stdio.h>

int a=20;                   //Defining global variable

void function();
void function()
{
    a=40;                   //Assigning Value to global variable 'a', updates it
    printf("Value of a within function: %d\n", a);
}
void main()
{
    printf("Value of i is; %d\n", a);
    function();
    printf("Value of i is; %d\n", a);
}
