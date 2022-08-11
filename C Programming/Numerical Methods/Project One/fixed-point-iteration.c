#include <stdio.h>
#include <math.h>

#define g(x) (-6 / (x - 5))
#define e 0.00001

void main()
{
    float x, x0, x1, error;
here:
    printf("enter one initial guesses: ");
    scanf("%f", &x0);

next:
    x1 = g(x0);
    error = fabs((x1 - x0) / x1);
    x0 = x1;
    if (error > e)
    {
        goto next;
    }
    else
    {
        printf("required root is %f\n", x1);
    }
}
