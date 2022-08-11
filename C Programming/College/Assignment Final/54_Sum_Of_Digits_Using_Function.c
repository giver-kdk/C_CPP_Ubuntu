/* A five digit positive integer is entered through the keyboard; write program using function to
calculate the sum of the digits of the number. The function should receive the integer from
main () and output also be printed through main ().*/
#include <stdio.h>
#include <conio.h>

float DigitSum(int number)
{
	int i, remainder, sum = 0;
	for(i = 0; i < 5; i++)
	{
		remainder = number % 10;
		sum = sum + remainder;
		number = number / 10;
	}
	return sum;
}
int main()
{
	int number, sum;
	printf("Enter a 5 digit number: ");
	scanf("%d", &number);
	sum = DigitSum(number);
	printf("Sum of digits is: %d", sum);
	getchar();
}