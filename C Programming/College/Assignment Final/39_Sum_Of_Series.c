/* Program to find the sum of the series x2 + 2x2 + 3x2 + 4x2 +.....+ nx2 */
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	float i, n, x, sum = 0;

	printf("Enter value of n: ");
	scanf("%f", &n);
	printf("Enter value of x: ");
	scanf("%f", &x);

	for(i = 1; i <= n; i++)
	{
		sum = sum + (i * pow(x, 2));
	}
	printf("Sum of the series is: %.3f", sum);
	getchar();
}