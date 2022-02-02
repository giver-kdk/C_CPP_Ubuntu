#include <stdio.h>

/*This program shows global variable incrementation*/
int i=10;                   //Defining global variable

int increment();
void main()
{
    printf("Value of i= %d", i);
    increment();
    increment();
    increment();
    increment();
}
int increment()
{
    i=i+1;
    printf("Value of i= %d\n", i);
}