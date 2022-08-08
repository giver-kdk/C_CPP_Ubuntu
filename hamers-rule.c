#include <stdio.h>
#include <conio.h>
#include <math.h>

#define f(x) (x*x - 4*x -9)
#define e 0.00001

void main()
{
    int i, n;
    float a[10], b[10], x0;
    here:
        printf("enter the order of polynomial: ");
        scanf("%d", &n);

        printf("enter the point of evaluation: ");
        scanf("%f", &x0);

        for(i = 0; i <= n; i++)
        {
            printf("enter the co-efficient of a[%d]: ", i);
            scanf("%f", &x0);
        }

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


