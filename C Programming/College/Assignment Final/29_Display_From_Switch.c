/* Write a program using switch statement to display EXCELLENT, VERY GOOD, GOOD,
SATISFACTORY, or FAIL if the user enters A, B, C, D, or E respectively. */
#include <stdio.h>
#include <conio.h>

int main()
{
	char choice;
	printf("Select your grade:\nA\tB\tC\tD\tE\n");
	fflush(stdin);
	scanf("%c", &choice);
	
	switch(choice)
	{
		case 'A':
			printf("EXCELLENT");
			break;
		case 'B':
			printf("VERY GOOD");
			break;
		case 'C':
			printf("GOOD");
			break;
		case 'D':
			printf("SATISFACTORY");
			break;
		case 'E':
			printf("FAIL");
			break;
		default:
			printf("Invalid Choice");
	}
	getchar();
}