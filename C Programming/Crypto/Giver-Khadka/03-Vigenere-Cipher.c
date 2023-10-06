#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i, j, k, value;
	for (k = 0; k < 3; k++)
	{
		char key[50], message[50], cipher[50];
		printf("\n Enter the message: ");
		gets(message);
		printf("\n Enter the key: ");
		gets(key);
		// Capitalize the strings for consistency
		for (int i = 0; i < strlen(message); i++) {
        	message[i] = toupper(message[i]);
    	}
		for (int i = 0; i < strlen(key); i++) {
        	key[i] = toupper(key[i]);
    	}
		printf("\n Encrypted Message: ");
		for (i = 0, j = 0; i < strlen(message); i++, j++)
		{
			if (j >= strlen(key)) j = 0;
			cipher[i] = 65 + (((message[i] - 65) + (key[j] - 65)) % 26);
			printf("%c", cipher[i]);
		}
		cipher[i] = '\0';
		printf("\n Decrypted Message: ");
		for (i = 0, j = 0; i < strlen(cipher); i++, j++)
		{
			if (j >= strlen(key)) j = 0;
			value = (cipher[i] - 65) - (key[j] - 65);
			if (value < 0) value = value + 26;
			printf("%c", 65 + (value % 26));
		}
	}
	printf("\nName: Giver Khadka");
	printf("\nRoll No: 05\n");
	return 0;
}