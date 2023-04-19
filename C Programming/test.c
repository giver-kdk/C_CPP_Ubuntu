#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int queue[SIZE];
int front = 0;
int rear = -1;

void Enqueue(int queue[], int num)
{
    if(rear == SIZE - 1)
    {
        printf("\nQueue Overflow");
    }
    else
    {
        rear = rear + 1;
        queue[rear] = num;
    }
}
void Dequeue(int queue[])
{
    int dt;
    if(rear < front)
    {
        printf("\nQueue Underflow");
    }
    else
    {
        dt = queue[front];
        front = front + 1;
        printf("\nDeleted item = %d", dt);
    }
}

void display(int queue[])
{
    int i;
    if(rear < front)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nContent of queue is: \n");
        for(i = front; i <= rear; i++)
        {
            printf("%d\t", queue[i]);
        }
    }
}

int main()
{
    int num, choice;
    printf("1. Enqueue\n 2. Dequeue \n 3. Display\n 4. Exit");
    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            printf("Enter the no. you want: ");
            scanf("%d", &num);
            Enqueue(queue, num);
            break;
            case 2:
            Dequeue(queue);
            break;
            case 3:
            display(queue);
            break;
            case 4:
            exit(0);
        }
    }
    return 0;
}