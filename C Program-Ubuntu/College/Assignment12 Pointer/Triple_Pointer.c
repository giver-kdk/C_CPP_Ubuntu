/*This program uses triple pointer to point to variable x*/
#include <stdio.h>
#include <conio.h>

void main()
{
    int x=10;
    int *p;
    int **q;
    int ***r;
    p=&x;
    q=&p;
    r=&q;
    printf("\n Value of x=%d", x);
    printf("\n Value of x=%d", *p);
    printf("\n Value of x=%d", **q);
    printf("\n Value of x=%d", ***r);
    getchar();
}
