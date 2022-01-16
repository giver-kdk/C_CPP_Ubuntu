#include <stdio.h>
void main()
{
    int a, b, sum1;
    short int m, n, sum2;
    long int r, s, sum3;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    sum1=a+b;
    printf("The sum of integers is %d", sum1);


    printf("\nEnter the first short integer: ");
    scanf("%hd", &m);
    printf("Enter the second short integer: ");
    scanf("%hd", &n);
    sum2=m+n;
    printf("\nThe sum of short integers is %hd", sum2);


    printf("\nEnter the first long integer: ");
    scanf("%ld", &r);
    printf("Enter the second long integer: ");
    scanf("%ld", &s);
    sum3=r+s;
    printf("\nThe sum of long integers is %ld", sum3);
}
