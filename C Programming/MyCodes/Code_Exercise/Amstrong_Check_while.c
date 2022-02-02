#include <stdio.h>
#include <math.h>

/*This program checks whether a multidigit number is Armstrong Number or not except 153.*/
int main()
{
    int a, t1, t2;
    double r, sum=0, count=0; //Since these are used with 'pow' function that stores result in 'double'
                                //But, these can be integers for 32-bit computer.
    printf("Enter any number: ");
    scanf("%d", &a);
    t1=a;
    t2=a;

    //Determines the number of digits in entered number
    while(t1!=0)
    {
        t1=t1/10;
        count=count+1;
    }

    //Separates the digits using '%' and adds up individual power of all the digits.
    do
    {
        r=t2%10;
        sum=sum+pow(r, count);
        t2=t2/10;
    }while(t2!=0);

    //Checks if the powered sum is equal to the entered number or not. 
    if(sum==a)
    {
        printf("The number is an Amstrong Number");

    }
    else
    {
        printf("The number is not an Amstrong Number");
    }
}