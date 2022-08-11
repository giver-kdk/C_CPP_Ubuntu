#include <stdio.h>
#include <conio.h>

/*This prgram print sum of square numbers using while loop*/
int main()
{
    int i=1, num, sum=0;
    printf("Enter any number: ");
    scanf("%d", &num);
    while(i<=num)
    {
        sum=sum+i*i;
        i++;
    }
    printf("The sum of squares is %d: ", sum);
}