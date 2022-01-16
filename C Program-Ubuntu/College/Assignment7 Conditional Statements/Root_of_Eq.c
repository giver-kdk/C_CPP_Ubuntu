#include <stdio.h>
#include <math.h>
#include <conio.h>

void main()
{
    float a, b, c, d, root1, root2, real, img;
    printf("\nEnter values a, b and c of the quadratic equation:");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b-4*a*c;

    if(d<0)
        {
        printf("\nImaginary Roots.");
        d = sqrt(fabs(d));    //computes absolute value of discriminant
        real = -b/(2*a);
        img = d/(2*a);      //formula for another root
        printf("\nRoot1 = %.2f +i %.2f", real, img);
        printf("\nRoot2 = %.2f -i %.2f", real, img);
        }
    else
        {
        printf("\nRoots are real.");
        d = sqrt(d);
        root1 = (-b+d)/(2*a);
        root2 = (-b-d)/(2*a);
        printf("\nRoot1 = %.2f \t Root2 = %.2f", root1, root2);
        }
    getchar();
}
