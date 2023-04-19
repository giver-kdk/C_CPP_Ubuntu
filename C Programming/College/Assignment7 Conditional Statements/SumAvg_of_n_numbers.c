

/* Program to read a number from keyboard until a zero or negative number is entered. Finally, calculating the sum and average of entered numbers.*/

#include <stdio.h>
#include <conio.h>
void main()
{
int num, count=0;
float sum=0, avg;
		do
		{
		printf("\nEnter number:\t");
		scanf("%d", &num);
		sum = sum + num;
		count++;
		}while(num>0);
sum=sum-num;
avg=(sum)/(count-1);	//'count-1' is used since count value is incremented by '1' even when num=0 once.
printf("\nThe sum is:\t%f", sum);
printf("\nThe average is:\t%f", avg);
getchar();
}
