#include <stdio.h>
#include <conio.h>
void main()
{
    int a=6, b=7, c, d, e;
    c=a&b;              //In binary: 6=110, 7=111. Then, 6 & 7 = 110 & 111= 110= 6.(AND GATE in bit level)
    d=a|b;              //OR GATE in bit level
    e=a^b;
    printf("The result is %d", c);
    printf("\nThe result is %d", d);
    printf("\nThe result is %d", e);
}