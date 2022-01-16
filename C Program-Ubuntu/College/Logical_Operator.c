#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, z, k, l, m;      
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    z= a>b&&a==b;               //'&&' is logical AND
    k= a>=b||a<b;               //'||' is logical OR
    l=a>b&&b>c&&c==a;
    m=!(a==b);          //'!' before (a==b) is logical NOT. It inverts result. If a==b is true, then result is false
    printf("z= %d   \tk= %d \tl= %d   \tm= %d", z, k, l, m);

}