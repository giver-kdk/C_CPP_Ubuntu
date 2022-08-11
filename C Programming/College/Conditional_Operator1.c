#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a, &b);
    
    (a>b)?printf("a is greater than b"):printf("b is greater than a");                
                                //if expression(a>b)==True, a is greater than b. Else, b is greater than a.
    
}