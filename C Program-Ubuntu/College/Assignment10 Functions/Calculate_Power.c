/*This program prints the power of number*/
#include <stdio.h>
#include <conio.h>
double power(double x, int p)
{
    double a=1;
	if(p==0)
	return 1;
	else if(p>0)            //If power is positive
    {
        while(p!=0)
        {
            a=a*x;
            p--;            //Decrement power
        }
        return a;
    }   
	else                     //If power is negative 
    {
        while(p!=0)
        {
            a=a/x;
            p++;            //Increment power
        }
        return a;
    }
}
void main()
{
    int p;
    double x, z;
    printf("Enter x and p:\t");
    scanf("%lf %d", &x, &p);

    z=power(x, p);
    printf("\n x raised to power n is:%lf", z);
    getchar();
}