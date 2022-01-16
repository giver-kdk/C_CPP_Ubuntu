#include <stdio.h>
#define SIZE 4

struct booklist
{
	char title[20];
	char author[20];
	float cost;
}b[SIZE];

int main()
{
	int i;
	float total = 0;
	printf("Enter book details:\n");
	for(i = 0; i < SIZE; i++)
	{
		printf("\nFor book %d\n", i + 1);
		printf("Title: ");
		scanf("%s", b[i].title);
		printf("Author: ");
		scanf("%s", b[i].author);
		printf("Cost: ");
		scanf("%f", &b[i].cost);
		total = total + b[i].cost;
	}
	printf("Total cost of the books is %f", total);
}