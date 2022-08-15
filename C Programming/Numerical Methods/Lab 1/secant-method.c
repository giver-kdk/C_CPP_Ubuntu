#include <stdio.h>
#include <math.h>

#define f(x) (2*x - cos(x))
#define e 0.00001

int main()
{
    float x3, x1, x2, error;
    here:
        printf("enter the two initial guesses: ");
        scanf("%f%f", &x1, &x2);

    next:
        x3 = x2 - (f(x2) * (x2 - x1)) / (f(x2) - f(x1));
        error = fabs((x3 - x2) / x3);
        x1 = x2;
        x2 = x3;
        if(error > e)
        {
            goto next;
        }
        else
        {
                printf("required root is %f\n", x3);
        }

}


