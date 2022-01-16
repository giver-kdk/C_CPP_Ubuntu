/* Program that displays the temperatures from 0 degrees Celsius to 100 degrees Celsius and their Fahrenheit equivalent. */
#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	float farenheit;
	for(i = 0; i <= 100; i++)
	{
		farenheit = (i * (180 / 100)) + 32;
		printf("%d degrees Celsius = %.3f Farenheit\n", i, farenheit);
	}
	getchar();
}