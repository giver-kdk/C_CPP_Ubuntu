#include <stdio.h>
void main()
{
    int a=12, b=14, sum1;
    unsigned int c=16, d=18, sum2;
    short int m=10, n=15, sum3;
    unsigned short int p=2, q=6, sum4;
    long int r=20, s=30, sum5;
    unsigned long int x=5, y=6, sum6;
    sum1=a+b;
    sum2=c+d;
    sum3=m+n;
    sum4=p+q;
    sum5=r+s;
    sum6=x+y;
    printf("The sum of integers is %d", sum1);
    printf("\nThe sum of unsigned integers is %u", sum2);
    printf("\nThe sum of short integers is %d", sum3);
    printf("\nThe sum of unsigned short integers is %u", sum4);
    printf("\nThe sum of long integers is %ld", sum5);
    printf("\nThe sum of unsigned long integers is %lu", sum6);
}
