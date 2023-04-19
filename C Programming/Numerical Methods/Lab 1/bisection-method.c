#include <stdio.h>
#include <math.h>

#define f(x) (x*x - 4*x -9)
#define e 0.00001

int main()
{
    float x, x0, x1, error;
    here:
        printf("enter the two initial guesses: ");
        scanf("%f%f", &x0, &x1);

        if(f(x0) * f(x1) > 0)
            {
                printf("invalid guess");
                goto here;
            }
    next:
        x = (x0 + x1) / 2;
        error = fabs((x1 - x0));
        if(f(x) * f(x1) < 0)
        {
            x0 = x;
        }
        else
        {
            x1 = x;
        }
        if(error > e)
        {
            goto next;
        }
        else
        {
                printf("required root is %f\n", x);
        }

}


