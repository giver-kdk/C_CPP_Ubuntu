#include <stdio.h>
#include <math.h>

/*This program calculates the sum of series 1/x- 1/(x^2)+ 1/(x^3)-... upto 10 terms.*/

int main()
{
    int i, num, sign=1;
    float sum=0, term;
    printf("Enter the value of x: ");
    scanf("%d", &num);
    for(i=1; i<=10; i++)
    {
        term= i/pow(num, i);            //Expression of 'n' term.
        sum= sum+ sign* term;      //Adding terms with a sign
        sign= sign*(-1);
    }
    printf("Sum of the series is %.3f", sum);
}
