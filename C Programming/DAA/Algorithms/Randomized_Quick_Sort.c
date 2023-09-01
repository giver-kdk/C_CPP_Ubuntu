#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int partition(int a[50], int p, int r)
{
    int pivot = a[p];
    int i = p, j;
    for(j = i + 1; j <= r; j++)
    {
        if(a[j] <= pivot)
        {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int temp = a[p];
    a[p] = a[i];
    a[i] = temp;
    return i;
}
int randomized_partition(int a[50], int p, int r)
{

    int k = (rand() % (r - p + 1)) + p;
    int temp = a[p];
    a[p] = a[k];
    a[k] = temp;
    return partition(a, p, r);
}
void randomized_qs(int a[50], int p, int r)
{
    if(p < r)
    {
        int q = randomized_partition(a, p, r);
        randomized_qs(a, p, q - 1);
        randomized_qs(a, q + 1, r);
    }
}
int main()
{
    srand(time(0));
    int i, a[50];
    printf("Enter 5 elements of array: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nBefore sorting: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    randomized_qs(a, 0, 4);
    printf("\nAfter sorting: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
}
