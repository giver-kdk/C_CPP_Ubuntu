#include <stdio.h>
#include <stdlib.h>

struct freeSpace
{
	int address;
	struct freeSpace *next;
};

void addNode(struct freeSpace **head, int addr)
{
	struct freeSpace *temp;
	temp = (struct freeSpace *)malloc(sizeof(struct freeSpace *));
	temp->address = addr;
	temp->next = NULL;
	if (head == NULL) *head = temp;
	else
	{
		struct freeSpace *lastNode = *head;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = temp;
	}
}
int main()
{
	struct freeSpace *head = NULL;
	struct freeSpace *temp = head;
	int start_add, length;
	printf("Enter start address : ");
	scanf("%d", &start_add);
	printf("Enter the length:");
	scanf("%d", &length);
	// constructing linked list
	for (int i = 0; i < length; i++)
	{
		if ((start_add + i) % 2 == 0 || (start_add + i) % 5 == 0)
		{
			addNode(&head, (start_add + i));
		}
	}

	printf("Linked List [Assuming memory address exactly divisible by 2 and 5 is free] \n");
	// printing bitmap
	while (temp->next != NULL)
	{
		printf("%d -> ", temp->address);
		temp = temp->next;
	}
	printf("NULL \n");
	return 0;
}