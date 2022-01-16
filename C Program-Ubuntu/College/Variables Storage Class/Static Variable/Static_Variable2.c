#include <stdio.h>

/*This program */
function()
{
    static int i= 10;
    i++;
    return i;
}
main()
{
    int x, y;
    x= function();
    y= function();
    printf("x= %d and y= %d", x, y);
}