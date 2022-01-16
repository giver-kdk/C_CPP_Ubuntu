/* In a bank there are N customers with attributes name, account_no, and balance; write a
program to find out who has the highest balance in the bank.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define NUM 10

struct customer
{
	char name[20];
	int acc_no;
	float balance;
}cust[NUM];

void printInfo(struct customer cust[], int i)
{
	printf("\nName: %s\n", cust[i].name);
	printf("Account Number: %d\n", cust[i].acc_no);
	printf("Balance: %.3f\n", cust[i].balance);
}

int main()
{
	int i, j, account, largest = 0;
	float money;

	printf("Enter customer details:\n");
	for(i = 0; i < NUM; i++)
	{
		printf("Customer %d Name: ", i + 1);
		scanf("%s", cust[i].name);
		printf("Account Number: ");
		scanf("%d", &cust[i].acc_no);
		printf("Balance: ");
		scanf("%f", &cust[i].balance);
	}
	for(i = 0; i < NUM; i++)
	{
		if(cust[i].balance > cust[largest].balance)
		{
			largest = i;
		}
	}
	printf("The richest person with highest bank balance is:\n");
	printInfo(cust, largest);
	getchar();
}