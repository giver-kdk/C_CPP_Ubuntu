#include <stdio.h>

/*This program modifies 1, 2, 3...series into (n+1) for Odd & (n-1) for Even.*/
int num=1;                      //Global Variable
void modify_odd();
void modify_even();

void main()
{
    modify_odd();           //First number '1' is odd.
}
void modify_odd()
{
    if(num<10)
    {
        printf("%d\t", num+1);
        num++;
    }
    modify_even();
    return;
}
void modify_even()
{
    if(num<=10)
    {
        printf("%d\t", num-1);
        num++;
    }
    modify_odd();
    return;
}