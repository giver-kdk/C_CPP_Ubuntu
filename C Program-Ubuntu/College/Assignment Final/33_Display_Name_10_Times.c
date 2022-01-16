/* Program to display your name 10 times using all the three looping statements*/
#include <stdio.h>
#include <conio.h>

int main()
{
	char name[20] = "Giver Khadka";
	int i;
	printf("for Loop:\n");
	for(i = 0; i < 10; i++)
	{
		printf("%s\n", name);
	}
	printf("\n");
	printf("while Loop:\n");
	i = 0;
	while(i < 10)
	{
		printf("%s\n", name);
		i++;
	}
	printf("\n");
	i = 0;
	printf("do while Loop:\n");
	do
	{
		printf("%s\n", name);
		i++;
	} while (i < 10);
	getchar();
}