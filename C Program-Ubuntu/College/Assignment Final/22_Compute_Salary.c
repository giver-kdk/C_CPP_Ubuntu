/* Rates of tax on gross salary are as shown below:
Income 						Tax
Less than 10,000 			Null
Rs. 10,000 to 19,999 		10%
Rs. 20,000 to 39,999 		15%
Rs. 40,000 to above 		20%
Write a program to compute the net salary after deducting the tax for the given information.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	float salary, tax, netSalary;
	printf("Enter Salary: ");
	scanf("%f", &salary);
	if(salary < 10000)
	{
		tax = 0;
	}
	else if((salary >= 10000) && (salary < 19999))
	{
		tax = 10;
	}
	else if((salary >= 20000) && (salary < 39999))
	{
		tax = 15;
	}
	else if(salary >= 40000)
	{
		tax = 20;
	}
	netSalary = salary - (salary * (tax / 100));
	printf("The tax rate is: %.3f %%\n", tax);
	printf("The net salary is: %.3f", netSalary);
	getchar();
}