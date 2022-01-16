/* Program to calculate b n using recursive as well as non recursive function.*/
#include <stdio.h>
#include <math.h>
#include <conio.h>

int find_power(int x, int power)
{
    if(power == 0)                            //Acts as condition to terminate recursion
    {
        return(1);
    }
    else
    {
        return( x * find_power(x, power - 1));
    }
}

void main()
{
	// With Recursive Call
    int i, num, power, result = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &power);
	result = find_power(num, power);
    printf("Power of the number with recursive call is %d", result);
    result = 1;
	// Without Recursive Call
	for(i = 0; i < power; i++)
	{
		result = result * num;
	}
	printf("\nPower of the number without recursive call is %d", result);
    getchar();
}