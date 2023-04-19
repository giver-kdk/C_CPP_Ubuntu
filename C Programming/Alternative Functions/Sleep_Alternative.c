#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
	int i;
	printf("1) Sleep 0.1 sec\t\t2) Sleep 0.5 sec\t\t3) Sleep 1 sec: ");
	scanf("%d", &i);
	switch(i)
	{
		case 1:
			printf("Sleeping 0.1 sec");
			printf("\n");
			// usleep(milliseconds * 1000);
			usleep(100 * 1000);
			break;
		case 2:
			printf("Sleeping 0.5 sec");
			printf("\n");
			usleep(900 * 1000);
			break;
		case 3:
			printf("Sleeping 1 sec");
			printf("\n");
			usleep(1000 * 1000);
			break;
		default:
			printf("Invalid Choice");

	}
}