#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void sort(float *, int);

void main()
{
    float  *f;
    int  n, i;
    printf("\n Enter number of elements in your array:");
    scanf("%d", &n);
    f=(float *)malloc(n*sizeof(float));
    printf("\n Enter the %d array elements:\t", n);
    for(i=0;i<n; i++)
        scanf("%f", f + i);
    printf("\n The unsorted list of array elements and their addresses are:\t");
    for(i=0;i<n; i++)
        printf("\n %f \t\t %u", *(f + i), f + i);
    sort(f, n);
    printf("\n The sorted list of array elements and their addresses are:\t");
    for(i=0;i<n; i++)
        printf("\n %f \t\t %u", *(f + i), f + i);
    getchar();
}
void sort(float *g, int n)
{
    int i, j;
    float temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n; j++)
        {
            if(*(g + i)>*(g + j))
            {
                temp=*(g + i);
                *(g + i)=*(g + j);
                *(g + j)=temp;
            }
        }
    }
}

