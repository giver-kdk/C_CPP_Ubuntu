/* Suppose a store has a number of items in their inventory and that each item is
supplied by at most two suppliers. Create inventory and supplier files. Find the addresses of
all suppliers who supply more than 10 different items. Discuss any changes in data structure
you would suggest to simplify solving this problem.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define ITEM_NUM 2
#define SUP_NUM 2

struct supplier
{
	char name[50];
	char address[50];
}sup;
struct inventory
{
	char name[50];
}item;

int main()
{
	int i, j, item_num, supplier_num, supply_count[50] = {0}, choice;
	char option;
	FILE *fp1, *fp2;
	printf("Enter the number of Items: ");
	scanf("%d", &item_num);
    // File Writing
    fp1 = fopen("inventory.txt", "w");
    if(fp1 == NULL)
    {
        printf("Error!");
        exit(1);
    }
	// Inventory Items
    printf("Enter list of inventory items :\n");
	for(i = 0; i < item_num; i++)
	{
		fflush(stdin);
		printf("Name of Item %d: ", i + 1);
		gets(item.name);

		fwrite(&item, sizeof(item), 1, fp1);
	}
    fclose(fp1);
	// Supplier Info
    fp2 = fopen("supplier.txt", "w");
	printf("Enter number of total Suppliers: ");
	scanf("%d", &supplier_num);
    printf("Enter suppliers detail:\n");
	for(i = 0; i < supplier_num; i++)
	{
		fflush(stdin);
		printf("Name of supplier %d: ", i + 1);
		gets(sup.name);
		fflush(stdin);
		printf("Address: ");
		gets(sup.address);
		fwrite(&sup, sizeof(sup), 1, fp2);
	}
    fclose(fp2);
	// File Reading
	fp1 = fopen("inventory.txt", "r+");
	// Count items supplied by a supplier
	printf("Select Supplier for Items:\n");
	while(fread(&item, sizeof(item), 1, fp1) != 0)
	{
		printf("For Item: %s\n", item.name);
		fp2 = fopen("supplier.txt", "r+");
		for(j = 1; (fread(&sup, sizeof(sup), 1, fp2)) != 0; j++)
		{
			printf("%d) %s\n", j, sup.name);
		}
		fclose(fp2);

		printf("Enter your choice: ");
		scanf("%d", &choice);
		if(choice > 0 && (choice <= supplier_num))
		{
			supply_count[choice - 1]++;
		}

		printf("Is there a 2nd supplier?(Y/N): ");
		scanf(" %c", &option);
		if(option == 'y' || option == 'Y')
		{
			printf("Select 2nd Supplier: ");
			scanf("%d", &choice);
			if(choice > 0 && (choice <= supplier_num))
			{
				supply_count[choice - 1]++;
			}
		}
	}

	fp2 = fopen("supplier.txt", "r+");
	printf("Adresses of suppliers who supply more than %d items:\n", ITEM_NUM);
	for(i = 0; (fread(&sup, sizeof(sup), 1, fp2)) != 0; i++)
	{
		if(supply_count[i] > ITEM_NUM)
		{
			printf("%d) %s", i + 1, sup.address);
		}
	}
    fclose(fp1);
    fclose(fp2);
	getchar();
}