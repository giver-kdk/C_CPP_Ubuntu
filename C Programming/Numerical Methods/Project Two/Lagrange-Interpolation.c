#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, n;
    float p, term, sum;
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
    printf("enter the point of evaluation: ");
    scanf("%f", &p);

    for(i = 0; i < n; i++)
    {
        term = 1;
        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                term = term * ((p - x[j]) / (x[i] - x[j]));
            }
        }
        l[i] = term;
    }
    sum = 0;
    for(i = 0; i < n; i++)
    {
        sum = sum + l[i] * y[i];
    }
    printf("The required value is %f\n", sum);

}