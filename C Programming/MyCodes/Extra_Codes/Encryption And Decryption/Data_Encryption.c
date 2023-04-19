/* This program encrypts data by simply adding 5 to ASCII value of character.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	char message[1000];
	printf("Enter your message to be encrypted: ");
	fflush(stdin);
	gets(message);
	// Data Encryption
	for (i = 0; message[i] != '\0'; i++)
	{
		message[i] = message[i] + 5;
	}
	printf("Your encrypted message is: %s", message);
}