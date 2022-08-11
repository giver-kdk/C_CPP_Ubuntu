/* Program to count number of times a function executes using static local variable.*/
#include <stdio.h>
#include <conio.h>

int function()
{
	static int count = 1;
	printf("Execution Count: %d\n", count);
	count++;
}
int main()
{
	function();
	function();
	function();
	getchar();
}