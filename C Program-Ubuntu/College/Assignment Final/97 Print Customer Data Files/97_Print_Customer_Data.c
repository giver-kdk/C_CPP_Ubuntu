/* Create a structure to specify data on customers in a bank with the parameters Acct. No.,
Name, Balance in Account. Assume there are 1000 customers in the bank. Write a program
to store the data in “CUST.DAT” file and print the Acct. No. and Name of each customer
with balance below Rs. 1000.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define NUM 1000

struct customer
{
	char name[50];
	int acc_num;
	float balance;
}cust;

int main()
{
	int i;
    // File Writing
    FILE *fp = fopen("cust.dat", "w");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Enter Customer Details:\n");

	for(i = 0; i < NUM; i++)
	{
		fflush(stdin);
		printf("Name of customer %d: ", i + 1);
		scanf("%s", cust.name);
		printf("Account Number: ");
		scanf("%d", &cust.acc_num);
		printf("Balance: ");
		scanf("%f", &cust.balance);
		fwrite(&cust, sizeof(cust), 1, fp);
	}
    fclose(fp);
	// File Reading
	fp = fopen("cust.dat", "r");
	printf("Customers with balance below Rs 1000:\n");
    while((fread(&cust, sizeof(cust), 1, fp)) != 0)
    {
		if(cust.balance < 1000)
		{
			printf("\nCustomer Name: %s\n", cust.name);
			printf("Account Number: %d\n", cust.acc_num);
		}
    }
    fclose(fp);
	getchar();
}