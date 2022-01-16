/* Program to display number of days in a month using switch statement.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int choice, num;
	printf("Select the month:\n");
	printf("1) January\t2) February\t3) March\t4) April\t5) May \t\t6) June\n");
	printf("7) July \t8) August\t9) September\t10) October\t11) November\t12) December\n");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			num = 31;
			break;
		case 2:
			num = 28;
			break;
		case 3:
			num = 31;
			break;
		case 4:
			num = 30;
			break;
		case 5:
			num = 31;
			break;
		case 6:
			num = 30;
			break;
		case 7:
			num = 31;
			break;
		case 8:
			num = 31;
			break;
		case 9:
			num = 30;
			break;
		case 10:
			num = 31;
			break;
		case 11:
			num = 30;
			break;
		case 12:
			num = 31;
			break;
		default:
			printf("Invalid Choice");
			exit(0);
	}
	printf("There are %d days in the selected month.", num);
	getchar();
}