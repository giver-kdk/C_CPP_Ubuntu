#include <stdio.h>

int main()
{
	for(int j = 0; j < 3; j++)
	{
		int num, i, count = 0;
		printf("Enter any number: ");
		scanf("%d", &num);
		for(i = 1; i <= num; i++)
			if(num % i == 0) count++;
		if(count == 2) printf("%d is a Prime Number\n", num);
		else printf("%d is not a Prime Number\n", num);
	}
	printf("\nName: Giver Khadka");
	printf("\nRoll No: 05\n");
}