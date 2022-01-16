#include <stdio.h>
#include <conio.h>
void main()
{
    int a1=1, b1=2, a2=4, b2=2, a3=5, b3=3, a4=12, b4=6, a5=10, b5=5;   

    a1+=b1;                                                //a1+=b1 means a1=a1+b1. So a1=3+2=5
    printf("The sum of a and b is: %d", a1);         
    a2-=b2;                                                 //a2-=b2 means a2=a2-b2. So a2= 4-2=2.
    printf("\nThe difference of  c and d is: %d", a2);  
    a3*=b3;                                                  //a3*=b3 means a3=a3*b3. So a3=5*3=15
    printf("\nThe multiplication of e and f is: %d", a3);         
    a4/=b4;
    printf("\nThe division of g and h is: %d", a4);
    a5%=b5;
    printf("\nThe remainder of i and j is: %d", a5);         
}