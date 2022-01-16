/* Program to display all the leap years starting from 1900 to 2000.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	for(i = 1900; i <= 2000; i++)
	{
		if((i % 100 == 0 && i % 400 == 0) || (i % 100 != 0 && i % 4 == 0))
		{
			printf("%d\n", i);
		}
	}
	getchar();
}