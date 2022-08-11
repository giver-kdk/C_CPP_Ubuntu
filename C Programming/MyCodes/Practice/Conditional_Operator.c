#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, greater;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    greater=a>b?a:b;
    printf("%d is the greatest number", greater);
}