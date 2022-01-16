/* Program to convert a temperature given in Celsius to Fahrenheit.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	float temperature1, temperature2;
	printf("Enter temperature in Celcius: ");
	scanf("%f", &temperature1);

	temperature2 = (temperature1 * (180 / 100)) + 32;

	printf("Temperature in Farenheit: %.3f", temperature2);
	getchar();
}