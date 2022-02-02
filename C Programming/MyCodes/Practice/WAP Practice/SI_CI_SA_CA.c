#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// #include <graphics.h>

int main()
{
	float SI, CI, CA, SA, p, t, r;
	printf("Enter p: ");
	scanf("%f", &p);
	printf("Enter t: ");
	scanf("%f", &t);
	printf("Enter r: ");
	scanf("%f", &r);
	SI = p*t*r / 100;
	CI = p* (pow((1 + r/100), t) - 1);
	SA = p + SI;
	CA = p + CI;
	printf("SI = %f\nCI = %f\nSA = %f\nCA = %f", SI, CI, SA, CA);
}