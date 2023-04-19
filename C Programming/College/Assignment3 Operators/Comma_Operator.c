#include <stdio.h>
#include <conio.h>

void main()
{
    int x, y, sum;
    sum= (x=10, y=5, x+y);            //The comma links the expressions. Right most part is the final expression.
    printf("The sum is %d", sum);    
}