#include <stdio.h>
#include <conio.h>

/*This program calculates sum of square numbers using for loop*/
int main()
{
    int i, num, sum=0;
    printf("Enter any number for square sum: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        sum=sum+i*i;
    }
    
    printf("Sumof squares is %d", sum);
}