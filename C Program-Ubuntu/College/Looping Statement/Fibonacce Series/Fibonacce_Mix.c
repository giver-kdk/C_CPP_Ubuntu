#include <stdio.h>
#include <conio.h>

int main()
{
    int i=1, pre, next, fib1=1, fib2=1, n;
    printf("Enter any number: ");
    scanf("%d", &n);
    pre=fib1;
    printf("%d", fib1);
    do{
        next=fib2+pre;
        pre=fib2;
        fib2=next;;
        printf("\t%d", pre);
        i=i+1;

    }while(i<n);
}