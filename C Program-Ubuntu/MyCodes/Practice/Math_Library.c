#include <stdio.h>
#include <math.h>

void main()
{
    printf("fmax(22,66.66)= %f", fmax(22,66.66));           //maximum float number between two numbers
    printf("\nfmin(22,66.66)= %f", fmin(22,66.66));         //minimum float number
    printf("\nexp(2)= %f", exp(2));                         //This means exponential(e^2)
    printf("\nlog(34)= %f", log(34));                       //Logarithm of 34
    printf("\nsqrt(144)= %f", sqrt(144));                   //Square Root of 144
    printf("\ncbrt(8)= %f", cbrt(8));                       //Cube Root of 8
    printf("\npow(3,4)= %f", pow(3,4));                     //3 to the power 4. i.e; 3^4
    printf("\nsin(2.3)= %f", sin(2.3));              //(Trigonometric) sin(2.3) where 2.3 is in radian not in degree
    printf("\nasin(0)= %f", asin(0));               //Inverse of sin   
    printf("\nceil(4.3)= %f", ceil(4.3));           //Shows upper integer value of 4.3 (i.e; 5)
    printf("\nfloor(4.3)= %f", floor(4.3));         //Shows lower integer value of 4.3 (i.e; 4)
    printf("\nround(3.6)= %f", round(3.6));         //Rounds off the float number
    printf("\ntruncate(3.6)= %f", trunc(3.6));     //Truncates(removes) unwanted decimal point & shows integer part
    printf("\nabsolute(-3.6)= %f", fabs(-3.6));     //Gives absolute value for float
                            //'abs()' is used to find absolute of integer(It belongs to 'stdlib.h' library)
}