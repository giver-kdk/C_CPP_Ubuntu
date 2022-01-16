#include <stdio.h>
#include <conio.h>

static int a=10;                //Global static variable
int function1(int b)
{
    printf("%d", a*b);
}
int function2()
{
    function1(a);           //Uses the global 'a' as parameter
}
int main()
{
    function2();
    getchar();
}