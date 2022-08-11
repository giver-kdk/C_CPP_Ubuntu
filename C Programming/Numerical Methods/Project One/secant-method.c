#include <stdio.h>
#include <math.h>

#define f(x) (x*x - 4*x -9)
#define e 0.00001

void main()
{
    float x, x1, x2, error;
    here:
        printf("enter the two initial guesses: ");
        scanf("%f%f", &x1, &x2);

    next:
        x = x2 - (f(x2) * (x2 - x1)) / (f(x2) - f(x1));
        error = fabs((x - x2) / x);
        x1 = x2;
        x2 = x;
        if(error > e)
        {
            goto next;
        }
        else
        {
                printf("required root is %f\n", x);
        }

}


