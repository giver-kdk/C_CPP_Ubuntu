/* This program decrypts data by subtracting 5 to ASCII value of character.*/
#include <stdio.h>
#include <conio.h>
#define PASSWORD 1234

int main()
{
	int i, password;
	char message[1000];
	printf("Enter your encrypted message for decrypting: ");
	fflush(stdin);
	gets(message);
	printf("Enter password key: ");
	scanf("%d", &password);
	if (password == PASSWORD)
	{
		// Data Decryption
		for (i = 0; message[i] != '\0'; i++)
		{
			message[i] = message[i] - 5;
		}
		printf("Your decrypted message is: %s", message);
	}
	else
	{
		printf("Wrong Password. Data cannot be encrypted!");
	}
}