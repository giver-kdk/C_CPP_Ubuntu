#include <stdio.h>

static int a=10;                //Global static variable
int function1(int b)
{
    printf("%d", a*b);
}
int function2()
{
    int a=30;            ///New variable 'a' created
    function1(a);
}
int main()
{
    function2();
}