#include <stdio.h>

int main()
{
	for (int i = 0; i < 3; i++)
	{
		char message[50], encrypt[50], decrypt[50];
		int k = 3, i;
		printf("\n Enter the message: ");
		gets(message);

		printf("\n Original message is: %s", message);
		// Data Encryption
		for (i = 0; message[i] != '\0'; i++)
			encrypt[i] = message[i] + k;

		encrypt[i] = '\0';
		printf("\n Encrypted message is: %s", encrypt);
		// Data Decryption
		for (i = 0; message[i] != '\0'; i++)
			decrypt[i] = encrypt[i] - k;
			
		decrypt[i] = '\0';
		printf("\n Decrypted message is: %s\n", decrypt);
	}
	printf("\nName: Giver Khadka");
	printf("\nRoll No: 05\n");
	return 0;
}