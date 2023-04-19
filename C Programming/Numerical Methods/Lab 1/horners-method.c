#include <stdio.h>
#include <math.h>

#define f(x) (x*x + 4*x + 9)
#define e 0.00001

int main()
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
            scanf("%f", &a[i]);
        }

    next:
        b[n] = a[n];
        for(i = n - 1; i >= 0; i--)
        {
            b[i] = a[i] + b[i + 1] * x0;
        }
        printf("The required value is %f\n", b[0]);

}


