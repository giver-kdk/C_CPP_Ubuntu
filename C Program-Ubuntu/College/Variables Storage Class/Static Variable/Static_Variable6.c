#include <stdio.h>

static int a=10;                //Global static variable
int function1(int b)
{
    printf("%d", a*b);
}
int function2()
{
    a=15;            ///New variable 'a' created
    function1(2);
}
int main()
{
    function2();
}