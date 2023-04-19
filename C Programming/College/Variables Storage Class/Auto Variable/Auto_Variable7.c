#include <stdio.h>

int increment();                //Return type'int' by default
void main()
{
    increment();
    increment();
    increment();
    increment();
}
int increment()
{
    auto int i=1;
    printf("%d\n", i);
    i++;         //Value of 'i' updates   
}               //Variable 'i' is destroyed