#include <stdio.h>
enum flag
{
	Bold = 1, Italic = 2, Underline = 4
};

int main()
{
	int my_flag = Bold | Underline;				//Bit wise OR operator performs OR operation in bit level
	printf("%d", my_flag);						//Final result will be modified variable
	
}