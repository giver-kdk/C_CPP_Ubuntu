#include <stdio.h>
#include <math.h>

/*This program calculates the sum of series 1/x- 1/(x^2)+ 1/(x^3)-... upto 10 terms.*/
int set_sign(int numerator);

int main()
{
    int i, num;
    float sum=0, term;
    printf("Enter the value of x: ");
    scanf("%d", &num);
    for(i=1; i<=10; i++)
    {
        term= i/pow(num, i);            //Expression of 'n' term.
        sum= sum+ (set_sign(i)* term);      //Adding terms with a sign function.
    }
    printf("Sum of the series is %.3f", sum);
}
int set_sign(int numerator)
{
    if(numerator%2==0)              
    {
        return(-1);             //Returns '-1' for even numerator. Hence, negative sign.
    }
    else
    {
        return(1);
    }
}