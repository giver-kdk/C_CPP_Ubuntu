#include <stdio.h>

static int a=10;
int function1(int b)
{
    printf("%d", a*b);
}
int function2()
{
    a++;            ///Update and run 10,11 codes
    function1(30);
}
int main()
{
    function2();
}