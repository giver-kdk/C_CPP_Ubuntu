#include <stdio.h>
#include <conio.h>

void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    a>0? printf("The number is positive") : printf("The number is negative");
}