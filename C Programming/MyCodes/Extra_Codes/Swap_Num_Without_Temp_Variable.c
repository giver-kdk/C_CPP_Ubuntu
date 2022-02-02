#include <stdio.h>
#include <stdlib.h>

/*This program interchanges the value of a and b without using extra temporary variables.*/
int main()
{
    int a = 5, b = 7;
    printf("a is %d", a);
    printf("\nb is %d", b);

    a = a + b;     //New value of 'a' becomes 5+ 7= 12.
    b = b + a;     //New value of 'b' becomes 7+ 12= 19.
    a = b - a;     //Second new 'a' becomes 19- 12= 7, which is original 'b'.
    b = b - 2 * a; //Second new 'b' becomes 19- 2*7= 5, which is original 'a'.
    printf("\nNew a is %d", a);
    printf("\nNew b is %d", b);
}