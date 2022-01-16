#include <stdio.h>
#include <stdio.h>

void main()
{
    float a, b;
    int sum;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    sum= a+b;               //'a' & 'b' are floats but 'sum' is integer. So, the result is integer. 
    printf("The sum is %d", sum);
}