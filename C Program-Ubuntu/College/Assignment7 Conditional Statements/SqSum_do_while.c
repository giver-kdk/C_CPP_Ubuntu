#include <stdio.h>
#include <conio.h>

/*This program calculates Sum of square numbers using while loop*/
int main()
{
    int i=1, num, sum=0;
    printf("Enter any number to calculate square sum: ");
    scanf("%d", &num);
    do
    {
        sum=sum+i*i;
        
        i++;
    }while(i<=num);
    
    printf("%d\t", sum);
}