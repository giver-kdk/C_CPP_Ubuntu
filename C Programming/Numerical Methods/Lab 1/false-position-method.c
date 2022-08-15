#include <stdio.h>
#include <math.h>

#define f(x) (x * x - 4 * x - 9)
#define e 0.00001

int main()
{
    float x2, x0, x1, error;
here:
    printf("enter the two initial guesses: ");
    scanf("%f%f", &x0, &x1);

    if (f(x0) * f(x1) > 0)
    {
        printf("invalid guess");
        goto here;
    }
next:
    x2 = x0 - (f(x0) * (x1 - x0)) / (f(x1) - f(x0));
    error = fabs(f(x2));
    if (f(x2) * f(x1) < 0)
    {
        x0 = x2;
    }
    else
    {
        x1 = x2;
    }
    if (error > e)
    {
        goto next;
    }
    else
    {
        printf("required root is %f\n", x2);
    }
}
