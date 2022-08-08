#include <stdio.h>
#include <conio.h>
#include <math.h>

#define f(x) (x*x - 4*x -9)
#define e 0.00001

void main()
{
    float x, x0, x1, error;
    here:
        printf("enter one initial guesses: ");
        scanf("%f", &x0);

    next:
        x1 = f(x0);
        error = abs((x1 - x0) / x1);
        x0 = x1;
        if(error > e)
        {
            goto next;
        }
        else
        {
                printf("required root is %f\n", x1);
        }
        getch();

}


