#include <stdio.h>
#define QUANTUM 2

struct Process
{
	int AT;
	int BT;
	int tempBT;
	int CT;
	int TAT;
	int WT;
	int finished;
	int inQueue;			// Tells whether a process has entered ready queue or not (at least once)
} p[20];
int readyQ[20], front = 0, rear = 0;
// Find current process id with minimum Arrival Time
int minimumAT(struct Process pro[20], int n)
{
	int min, id, i, j;
	for (i = 0; i < n; i++)
	{
		if (pro[i].finished == 0)
		{
			min = pro[i].AT;
			id = i;
			for (j = 0; j < n; j++)
			{
				if (min > pro[j].AT && pro[j].finished == 0)
				{
					min = pro[j].AT;
					id = j;
				}
			}
			break;
		}
	}
	return id;
}
// Insert all current processes that are under minimum AT into ready queue
void updateQ(struct Process p[20], int time, int queue[20], int n)
{
	int size = rear;
	for(int i = 0; i < n; i++)
	{
		if(p[i].AT <= time && p[i].inQueue == 0 && p[i].finished == 0)
		{
			readyQ[rear++] = i;							// Store process id
			p[i].inQueue = 1;
		}
	}
	if(size == rear) readyQ[rear++] = -1;				// Store -1 to indicate no process id stored
}
int main()
{
	int n, avWT = 0, avTAT = 0, minAtPid = 0, i, j, notComplete = 1;
	printf("Enter total number of processes:");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("\nEnter Process Arrival Time\n");
		printf("P[%d]:", i + 1);
		scanf("%d", &p[i].AT);
		printf("\nEnter Process Burst Time\n");
		printf("P[%d]:", i + 1);
		scanf("%d", &p[i].BT);
		p[i].tempBT = p[i].BT;
		p[i].finished = 0; 		// Initial Process Status
		p[i].inQueue = 0; 		// Initially no Process is inside Queue
	}

	// RR Logic Gantt Chart
	minAtPid = minimumAT(p, n);
	int startAT = p[minAtPid].AT, time = p[minAtPid].AT, currTime = time, tempTime;
	p[readyQ[rear]].inQueue = 1;
	readyQ[rear++] = minAtPid;

	while (notComplete == 1)
	{
		for (i = front; i < rear; i++)
		{
			// Select un-executed process with minimum AT
			if(readyQ[i] == -1) continue;
			if (time != startAT) printf(" --> ");
			tempTime = currTime;
			if (p[readyQ[i]].tempBT >= QUANTUM)
			{
				currTime += QUANTUM;
				p[readyQ[i]].tempBT -= QUANTUM;
			}
			else
			{
				currTime+= p[readyQ[i]].tempBT;
				p[readyQ[i]].tempBT = 0;
			}
			// Update time and set process status
			if (currTime == time)
			{
				time++;
				currTime++;
			}
			else time = currTime;
			// Print Gantt Chart and update ready queue
			printf("P%d(%d-%d)", readyQ[i] + 1, tempTime, currTime);
			p[readyQ[i]].CT = currTime;
			if (p[readyQ[i]].tempBT == 0) p[readyQ[i]].finished = 1;
			updateQ(p, currTime, readyQ, n);
			if(p[readyQ[i]].finished == 0)
			{
				readyQ[rear++] = readyQ[i];
			}
			front++;						// Don't run process which is already executed. So, increment "front"
		}
		// Simply increment time and update queue if no process arrived till current minimum AT
		time++;
		currTime++;
		updateQ(p, currTime, readyQ, n);

		notComplete = 0;
		// Check if all processes are finished executing
		for (j = 0; j < n; j++)
		{
			if (p[j].finished == 0) notComplete = 1;
		}
	}
	// Display calculated output
	printf("\nProcess\t\tCompletion Time\t\tTurnaround Time\t\tWaiting Time");
	for (i = 0; i < n; i++)
	{
		p[i].TAT = p[i].CT - p[i].AT;
		p[i].WT = p[i].TAT - p[i].BT;
		avTAT += p[i].TAT;
		avWT += p[i].WT;
		printf("\nP[%d]\t\t%d\t\t\t%d\t\t\t%d", i + 1, p[i].CT, p[i].TAT, p[i].WT);
	}
	avTAT /= n;
	avWT /= n;
	printf("\nAverage Turnaround Time:%d", avTAT);
	printf("\nAverage Waiting Time:%d\n", avWT);
}