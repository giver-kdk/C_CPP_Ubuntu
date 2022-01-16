#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    if(a>b && b>c || c>b)
    {
        printf("The first number %d is the greatest", a);
    }
    else if(b>c && c>a || a>c)                  //If the above condition==False, then check this condition.
    {
        printf("The second number %d is the greatest", b);
    }
    else
    {
        printf("The third number %d is the greatest", c);
    }
}