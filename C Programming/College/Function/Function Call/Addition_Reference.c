#include <stdio.h>

/*This program does addition using function call by reference argument.*/
void function(int a, int b, int *sum, int *diff);
void main()
{
    int x=100, y= 50;
    int SUM, DIFF;
    function(x, y, &SUM, &DIFF);
    printf("\nSUM= %d    DIFF= %d", SUM, DIFF);

}
void function(int a, int b, int *sum, int *diff)
{
    *sum= a+b;          // sum result stored at '*sum' pointer/address
    *diff= a-b;         
}