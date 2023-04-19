/* Create a structure to specify data on customer in a bank. The data to store is: Acc. No.,
Name, and Balance in account. Assume maximum of 200 customers in the bank.
a. Write a function to print the Acct. no. and name of each customer with balance below Rs. 100.
b. If a customer gives a request for withdrawl or deposit it is given in the form: Acct. no., Amount
(1 for deposit and 2 for withdrawl)
Write a program to give a message “the balance is insufficient” for the specified withdraw.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define NUM 200

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

void printSpecific(struct customer cust[])
{
	int i;
	printf("Bank Records of Customers are:\n");
	for(i = 0; i < NUM; i++)
	{
		if(cust[i].balance < 100)
		{
			printInfo(cust, i);
		}
	}
}

int main()
{
	int i, j, account;
	float money;
	char choice;

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
	printf("What do you want to do?\n");
	printf("1) Print Detail of Customer with balance below Rs. 100\n");
	printf("2) Deposit Money\t 3) Withdarw Money\n");
	scanf(" %c", &choice);

	switch(choice)
	{
		case '1':
			printSpecific(cust);	
			getchar();
			break;
		case '2':
			printf("Enter you account number: ");
			scanf("%d", &account);
			printf("Enter deposit amount: ");
			scanf("%f", &money);
			for(i = 0; i < NUM; i++)
			{
				if(cust[i].acc_no == account)
				{
					cust[i].balance +=  money;
					printf("\nAmount deposited Successfully!\n");
					printInfo(cust, i);
					getchar();
					exit(0);
				}
			}
			printf("Account Number Not Found!");
			break;
		case '3':
			printf("Enter you account number: ");
			scanf("%d", &account);
			printf("Enter withdrawal amount: ");
			scanf("%f", &money);
			for(i = 0; i < NUM; i++)
			{
				if(cust[i].acc_no == account)
				{
					if(cust[i].balance >= money)
					{
						cust[i].balance -=  money;
					}
					printf("\nAmount Withdrawal Successfull!\n");
					printInfo(cust, i);
					getchar();
					exit(0);
				}
			}
			printf("The balance is insufficient!");
			break;
		default:
			printf("Invalid Option!");
	}
	getchar();
}