#include <stdio.h>
#include <conio.h>

/*This program calculates the HCF using the popular Euclid's Algorithm*/
int main()
{
    int m, n, remainder;
    printf("Enter the first number: ");
    scanf("%d", &m);
    printf("Enter the second number: ");
    scanf("%d", &n);
    if(n==0)
    {
        printf("%d is the HCF", m);         
    }
    else if(m==0)
    {
        printf("%d is the HCF", n);
    }
    else
    {
        while(n!=0)
        {
        remainder=m%n;              //These statements run until n==0.
        m=n;
        n=remainder;
        }
        printf("%d is the HCF", m);     //When n==0, then 'while' loop is exited and this statement runs.

    }

}