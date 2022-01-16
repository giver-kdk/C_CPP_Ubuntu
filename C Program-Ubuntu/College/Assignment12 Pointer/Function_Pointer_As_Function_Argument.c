#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.1415926

double y(double);
double table(double (*f)(),double, double, double);
double cos(double);
void main()
{
    printf("Table of y(x)=2*x*x-x+1\n");
    table(y,0.0,2.0,0.5);
    printf("\nTable of cos(x)\n");
    table(cos,0.0,PI,0.5);
    getchar();
}

double table(double (*f)(),double min, double max, double step) //f=y
{
    double a,value;
    for(a=min;a<=max;a+=step)           //Here, 'a' is incremented by 
    {
        value=(*f)(a);        //y(a)
        printf("%5.2f %10.4f\n", a, value);
    }
    return 0;
}

double y(double x)
{
    return (2*x*x-x+1);
}
