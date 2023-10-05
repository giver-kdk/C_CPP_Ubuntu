#include <stdio.h>

void job_seq(int d[], int j[], int n, int k);

int main()
{
    int i, n, k = 1, j[20], p[20], d[20];
    printf("Enter number of jobs: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter job profit: ");
        scanf("%d", &p[i]);
        j[i]= i + 1;
        
        printf("Enter job deadline: ");
        scanf("%d", &d[i]);
    }
    job_seq(d, p, n, k);
    
}
void job_seq(int d[], int p[], int n, int k)
{
    int i, r, l;
    d[0] = 0;
    p[0] = 0;
    k = 1;
    p[1] = 1;
    for(i = 2; i <= n; i++)
    {
        r = k;
        while(d[p[r]] > d[i] && d[p[r]] != r)
        {
            r = r - 1;
        }
        if(d[p[r]] <= d[i] && d[i] > r)
        {
            for(l = k; l >= r + 1; l--)
            {
                p[l + 1] = p[l];
                p[r + 1] = i;
                k++;
            }
        }
    }
}
