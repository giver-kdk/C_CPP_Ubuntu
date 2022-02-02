/*Program to determine even/odd using enum for readability*/
#include <stdio.h>
enum boolean
{
	False, True				//False = 0 and True = 1
};
enum boolean find_even(int num);
int main()
{
	int x;
	enum boolean result;
	printf("Enter a number: ");
	scanf("%d", &x);
	result = find_even(x);
	if(result == True)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}

}
enum boolean find_even(int num)
{
	if(num %2 == 0)
	{
		return(True);
	}
	else
	{
		return(False);
	}
}