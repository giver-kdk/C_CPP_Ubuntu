/* Twenty-five numbers are entered through the keyboard into an array; write a program find
out how many of them are even and how many of them are odd.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int i, array[25], even = 0, odd = 0;
	printf("Enter any 25 numbers:\n");
	
	for(i = 0; i < 25; i++)
	{
		scanf("%d", &array[i]);
		if(array[i] % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("Even: %d\tOdd: %d", even, odd);
	getchar();
}