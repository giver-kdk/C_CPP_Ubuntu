// Program in C to find cartesian product of two sets.
#include <stdio.h>
#include <math.h>

int main()
{
    char ch;
    int a[10], b[10], m, n, i, j;
    printf("How many elemnets do you want in set a?\n");
    scanf("%d", &m);
    printf("Enter %d elements in set a: ", m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("How many elements do you want in set b?\n");
    scanf("%d", &n);
    printf("Enter %d elements in set b: ", n);
    for (j = 0; j < n; j++)
    {
        scanf("%d", &b[j]);
    }
    printf("\nCartesian Product: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("{%d, %d}, ", a[i], b[j]);
        }
    }
    ch = getchar();
    return 0;
}
