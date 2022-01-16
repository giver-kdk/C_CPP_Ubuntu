#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    if(a>b && a>c)
    {
        printf("a is the largest number");
    }
    else if(b>a && b>c)                 // if above condition==False, then check this condition
    {
        printf("b is the largest number");
    }
    else if(c>a && c>b)                 //Again, if above condition==False, then check this condition
    {
        printf("c is the largest number");
    }
    else
    {
        printf("All numbers are equal!");
    }
    getchar();

}