/*This program sets user defined name for integers using enum for improvised readability*/
/*The constants inside enum is arranged in numerical order. Assigning random value is possible.
Ordered sequence is continued after the last manual assignment.*/
#include <stdio.h>
enum week
{
	Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
};

void main()
{
	int day;
	enum week today;
	
	printf("Enter any number between 1 to 7: ");
	scanf("%d", &today);
	switch(today)
	{
		case Sunday:
			printf("The day today is: Sunday");
			break;
		case Monday:
			printf("The day today is: Monday");
			break;
		case Tuesday:
			printf("The day today is: Tuesday");
			break;
		case Wednesday:
			printf("The day today is: Wednesday");
			break;
		case Thursday:
			printf("The day today is: Thursday");
			break;
		case Friday:
			printf("The day today is: Friday");
			break;
		case Saturday:
			printf("The day today is: Saturday");
			break;
		default:
			{
				printf("Invalid Number");
			}
	}
}