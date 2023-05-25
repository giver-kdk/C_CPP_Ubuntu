#include <stdio.h>
struct Process
{
	int AT;
	int BT;
	int CT;
	int TAT;
	int WT;
	int finished;
} p[20];
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
int main()
{
	int n, avWT = 0, avTAT = 0, minAtPid = 0, i, j, notComplete = 1;
	printf("Enter total number of processes:");
	scanf("%d", &n);
	// User input
	for (i = 0; i < n; i++)
	{
		printf("\nEnter Process Arrival Time\n");
		printf("P[%d]:", i + 1);
		scanf("%d", &p[i].AT);
		printf("\nEnter Process Burst Time\n");
		printf("P[%d]:", i + 1);
		scanf("%d", &p[i].BT);
		p[i].finished = 0; 			// Initial Process Status
	}
	minAtPid = minimumAT(p, n);

	// FCFS Logic Gantt Chart
	int startAT = p[minAtPid].AT;					// Start time to run process 
	int time = p[minAtPid].AT;
	int currTime = time;
	while (notComplete == 1)
	{
		minAtPid = minimumAT(p, n);
		for (i = 0; i < n; i++)
		{
			// Select un-executed process with minimum AT
			if (p[i].finished == 0 && minAtPid == i && time >= p[minAtPid].AT)
			{
				if (time != startAT) printf(" --> ");
				printf("P%d(%d-%d)", i + 1, currTime, currTime + p[i].BT);
				// Update time and set process status
				currTime = currTime + p[i].BT;
				p[i].CT = currTime;
				p[i].finished = 1;
			}
		}
		if (currTime == time)					// No new processes at current time 
		{
			time++;								// Just move forward
			currTime++;
		}
		else time = currTime;
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