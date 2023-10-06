#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *plainTextToCipherText(char plainText[], int n)
{
	int i, j, counter, limit, index = 0, len;
	char *cipherText;
	len = strlen(plainText);
	cipherText = (char *)malloc(sizeof(char) * (len + 1));
	for (i = 0; i < n; i++)
	{
		counter = 0;
		for (j = i; j < len; j += limit)
		{
			cipherText[index++] = plainText[j];
			if (i == 0 || i == n - 1)
				limit = 2 * n - 2;
			else if (counter % 2 == 0)
				limit = 2 * (n - i - 1);
			else
				limit = 2 * i;
			if (limit <= 0)
				break;
			counter++;
		}
	}
	cipherText[index] = '\0';
	return cipherText;
}
int main()
{
	for(int i = 0; i < 3; i++)
	{
		int n;
		char plainText[100];
		printf("Enter the plain text : ");
		scanf("%s", plainText);
		printf("Enter the value of n : ");
		scanf("%d", &n);
		printf("Cipher Text is: %s\n", plainTextToCipherText(plainText, n));
	}
	printf("\nName: Giver Khadka");
	printf("\nRoll No: 05\n");
	return 0;
}