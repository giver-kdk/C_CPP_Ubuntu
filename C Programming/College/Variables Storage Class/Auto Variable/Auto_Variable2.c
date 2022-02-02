#include <stdio.h>

/*This program shows that variables in different functions are different*/
int function();

void main()
{
    auto int a=5;
    printf("Value of a= %d\n", a);
    function();
}
int function()
{
    auto int a=10;
    printf("Value of a within function =%d", a);
}