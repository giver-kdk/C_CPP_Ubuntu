// WAP to simulate SCAN Disk Scheduling Algorithm
#include <stdio.h>
int absoluteValue(int);

int main()
{
	int queue[25], n, headPos, i, j, k, seek = 0, maxrange;
	int diff, temp, queue1[20], queue2[20], temp1 = 0, temp2 = 0;
	float avgSeekTime;
	printf("Enter the maximum range of Disk: ");
	scanf("%d", &maxrange);
	printf("Enter the number of queue requests: ");
	scanf("%d", &n);
	printf("Enter the initial head position: ");
	scanf("%d", &headPos);
	// Reading disk positions to be read in the order of arrival
	printf("Enter the disk positions to be read(queue): ");
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &temp);
		if (temp > headPos)
		{
			queue1[temp1] = temp;
			temp1++;
		}
		else
		{
			queue2[temp2] = temp;
			temp2++;
		}
	}
	// SORTING array queue1[] in ascending order
	for (i = 0; i < temp1 - 1; i++)
	{
		for (j = i + 1; j < temp1; j++)
		{
			if (queue1[i] > queue1[j])
			{
				temp = queue1[i];
				queue1[i] = queue1[j];
				queue1[j] = temp;
			}
		}
	}
	// SORTING array queue2[] in descending order
	for (i = 0; i < temp2 - 1; i++)
	{
		for (j = i + 1; j < temp2; j++)
		{
			if (queue2[i] < queue2[j])
			{
				temp = queue2[i];
				queue2[i] = queue2[j];
				queue2[j] = temp;
			}
		}
	}
	for (i = 1, j = 0; j < temp1; i++, j++)
		queue[i] = queue1[j];
	// Set queue[i] to maxrange cause head goes to end and comes back
	queue[i] = maxrange;
	for (i = temp1 + 2, j = 0; j < temp2; i++, j++)
		queue[i] = queue2[j];
	// Setting queue[i] to 0. Because that is the innermost cylinder.
	queue[i] = 0;
	queue[0] = headPos;
	for (j = 0; j <= n; j++)
	{
		// Find diff between next position and current position.
		diff = absoluteValue(queue[j + 1] - queue[j]);
		// Adding diff to the current seek time value
		seek = seek + diff;
		printf("Disk head moves from position %d to %d with Seek %d \n", queue[j], queue[j + 1], diff);
	}
	avgSeekTime = seek / (float)n;
	printf("Total Seek Time= %d\n", seek);
	printf("Average Seek Time= %f\n", avgSeekTime);
	return 0;
}

int absoluteValue(int x)
{
	if (x > 0) return x;
	else return x * -1;
}
