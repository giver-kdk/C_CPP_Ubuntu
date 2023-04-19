#include <stdio.h>
#include <conio.h>

void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    a%2==0? printf("The number is even") : printf("The number is odd");         //
}