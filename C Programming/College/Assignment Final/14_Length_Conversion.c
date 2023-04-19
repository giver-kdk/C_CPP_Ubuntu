/* Program to express a length given in millimeters in meters, centimeters, and millimeters.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	float millimeters, meters, centimeters;
	printf("Enter length in millimeters: ");
	scanf("%f", &millimeters);

	meters = millimeters / 1000;
	centimeters = millimeters / 10;

	printf("Length in Millimeters: %.3f mm\n", millimeters);
	printf("Length in Meters: %.3f m\n", meters);
	printf("Length in Centimeters: %.3f cm", centimeters);
	getchar();
}