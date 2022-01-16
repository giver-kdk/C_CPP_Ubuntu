/*This program sets user defined name for integers */
#include <stdio.h>
/*The constants inside enum is arranged in numerical order. Assigning random value is possible.
Ordered sequence is continued after the last manual assignment.*/
enum week
{
	Sunday = 1, Monday = 10, Tuesday = 3, Wednesday = 3, Thursday, Friday, Saturday
};

void main()
{
	int i;
	enum week today;
	// for(i = Sunday; i <= Saturday; i++)
	// {
	// 	today = i;
	// 	printf("Day: %d\n", today);
	// }
	today = Sunday;
	printf("Day: %d\n", today);
	today = Monday;
	printf("Day: %d\n", today);
	today = Tuesday;
	printf("Day: %d\n", today);
	today = Wednesday;
	printf("Day: %d\n", today);
	today = Thursday;
	printf("Day: %d\n", today);
	today = Friday;
	printf("Day: %d\n", today);
	today = Saturday;
	printf("Day: %d\n", today);

	printf("Size of today: %d bytes", sizeof(today));
}