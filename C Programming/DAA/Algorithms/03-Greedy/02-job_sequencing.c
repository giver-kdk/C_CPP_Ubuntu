#include <stdio.h>
int k = 1;
void job_seq(int d[], int j[], int n);

int main()
{
    int i, n, j[20], p[20], d[20];
    printf("Enter number of jobs in decreasing order: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("Enter job profit: ");
        scanf("%d", &p[i]);
        j[i]= i;
        
        printf("Enter job deadline: ");
        scanf("%d", &d[i]);
    }
    job_seq(d, j, n);
	printf("\nJob sequence with maximum profit:");
    for (i = 1; i <= k; i++)
    {
        printf("%d ", j[i]);
    }
	printf("\nName: Giver Khadka\tRoll No: 05\n");
}
void job_seq(int d[], int j[], int n)
{
    int i, r, l;
    d[0] = 0;
    j[0] = 0;
    k = 1;
    j[1] = 1;
    for(i = 2; i <= n; i++)
    {
        r = k;
        while(d[j[r]] > d[i] && d[j[r]] != r)
        {
            r--;
        }
        if(d[j[r]] <= d[i] && d[i] > r)
        {
            for(l = k; l >= r + 1; l--)
            {
                j[l + 1] = j[l];
				j[r + 1] = i;
				k++;
            }
        }
    }
}
