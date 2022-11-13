#include <stdio.h>
#include <math.h>
#define f(x) (1 / (sqrt(1 + x*x)))
int main()
{
    int i, n;
    float a, b, h, x[10], y[10], IV;

    printf("Enter the lower limit: ");
    scanf("%f", &a);
    printf("Enter the upper limit: ");
    scanf("%f", &b);

    printf("Enter the number of segment: ");
    scanf("%d", &n);

    h = (b - a) / n;
    x[0] = a;
    y[0] = f(a);

    for(i = 1; i <= n; i++)
    {
        x[i] = x[i - 1] + h;
        y[i] = f(x[i]);
    }

    IV = y[0] + y[n];
    for(i = 1; i < n; i++)
    {
        IV = IV + 2*y[i];
    }
    IV = IV * (h / 2);
    printf("The integral value is %f", IV);
}
