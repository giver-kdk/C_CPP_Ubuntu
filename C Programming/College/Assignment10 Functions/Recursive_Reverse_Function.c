/*This program revereses the entered number using recirsive function call*/
#include <stdio.h>
#include <conio.h>

int rev(int);

void main()
{
    int n, r;
    printf("\n Enter number you want to reverse:");
    scanf("%d", &n);
    r=rev(n);
    printf("\n The reverse of the number is:%d", r);
    getchar();
}

int rev(int num)
{
    static int sum=0; 		//sum should retain its previous value
    int r;
    if(num != 0)              		//stopping condition
    {
        r=num%10;
        sum=sum*10+r;
        rev(num/10); 		//recursive function call
    }
    return sum;
}
