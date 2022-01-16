#include<stdio.h>
void main()
{
    int fib1, fib2, pre, next, n;
    fib1=1;
    fib2=1;
    pre=fib1;
    printf("enter the number upto fibonacci sequence:\t");
    scanf("%d",&n);
    printf("%d\t",fib1);
    do
    {
        next=fib2+pre;
        pre=fib2;
        fib2=next;
     printf("%d\t",pre);
    }
     while(n>next);

}