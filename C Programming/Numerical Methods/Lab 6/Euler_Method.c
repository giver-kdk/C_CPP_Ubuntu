#include <stdio.h>
#include <math.h>
#define f(x, y) (x + y)

int main()
{
    float x, y, p, h, m;
    printf("Enter initial value of x and y: ");
    scanf("%f %f", &x, &y);
    printf("Enter step size: ");
    scanf("%f", &h);
    printf("Enter point of evaluation: ");
    scanf("%f", &p);

    do
    {
        m = f(x, y);
        x = x + h;
        y = y + m * h;
    }while(p > x);
    printf("The solution is: %f", y);
}
