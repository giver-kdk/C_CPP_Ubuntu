#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, n;
    float p, term, sumx = 0, sumy = 0, sumxy = 0, sumx2 = 0, a, b;
    float x[10], y[10], l[10];
    printf("enter the number of data point: ");
    scanf("%d", &n);

    printf("enter the data for x: \n");
    for(i = 0; i < n; i++)
    {
        printf("enter the value of x[%d]: ", i);
        scanf("%f", &x[i]);
    }
    printf("enter the data for y: \n");
    for(i = 0; i < n; i++)
    {
        printf("enter the value of y[%d]: ", i);
        scanf("%f", &y[i]);
    }

    for(i = 0; i < n; i++)
    {
        sumx = sumx + x[i];
        sumy = sumy + y[i];
        sumxy = sumxy + (x[i] * y[i]);
        sumx2 = sumx2 + (x[i] * x[i]);
    }

    b = ((n * sumxy - sumx * sumy) / (n * sumx2 - sumx * sumx));
    a = (sumy / n) - (b * (sumx / n));
    printf("The required fit line is: y = %f + %fx\n", a, b);

}