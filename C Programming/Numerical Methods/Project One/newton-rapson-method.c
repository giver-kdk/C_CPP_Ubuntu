#include <stdio.h>
#include <math.h>

#define f(x) (x*x - 4*x -9)
#define fd(x) (2*x - 4)

#define e 0.00001

void main()
{
    float x, x0, x1, error;
    here:
        printf("enter one initial guesses: ");
        scanf("%f", &x0);

        if(fd(x0) == 0)
        {
            printf("invalid guess");
            goto here;
        }
    next:
        x1 = x0 - (f(x0)/fd(x0));
        error = fabs((x1 - x0) / x1);
        x0 = x1;
        if(error > e)
        {
            goto next;
        }
        else
        {
                printf("required root is %f\n", x0);
        }

}


