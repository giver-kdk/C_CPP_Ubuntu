// Program to find first and second derivative using centrtal difference formula 
// And second order derivative formula
#include <stdio.h>
#include <math.h>
#define e exp(1)
#define f(x) (pow(e, x) * cos(x))

int main()
{
    float x, h, f1, f2;
    
    printf("Enter the value of step size: ");
    scanf("%f", &h);
    printf("Enter the point of evaluation: ");
    scanf("%f", &x);

    f1 = ((f(x + h) - f(x - h)) / (2 * h));
    f2 = ((f(x + h) + f(x - h) - (2 * f(x))) / (h * h));
    printf("The first derivative at x= %f and h= %f is %f\n", x, h, f1);
    printf("The second derivative at x= %f and h= %f is %f\n", x, h, f2);

}