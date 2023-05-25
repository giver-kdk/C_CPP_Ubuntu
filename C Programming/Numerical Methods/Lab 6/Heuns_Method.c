#include <stdio.h>
#include <math.h>
#define f(x, y) (x + y)

int main()
{
    float x, y, p, h, m, m1, m2, ye;
    printf("Enter initial value of x and y: ");
    scanf("%f %f", &x, &y);
    printf("Enter step size: ");
    scanf("%f", &h);
    printf("Enter point of evaluation: ");
    scanf("%f", &p);

    do
    {
        m1 = f(x, y);
        x = x + h;
        ye = y + m1 * h;
        m2 = f(x, ye);
        m = (m1 + m2) / 2;
        y = y + m * h;
  }while(p > x);
    printf("The solution is: %f", y);
}
