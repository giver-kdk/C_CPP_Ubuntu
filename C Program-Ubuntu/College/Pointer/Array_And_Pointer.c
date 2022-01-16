#include <stdio.h>

int main()
{
    int i, a[5] = {1, 2, 3, 4, 5};
    printf("Array elements\t\tValue\t\tAddress\n");
    for(i = 0; i < 5; i++)
    {
        printf("a[%d]\t\t\t%d\t\t%u\n", i, a[i], &a[i]);
        printf("a[%d]\t\t\t%d\t\t%u\n", i, *(a + i), a + i);
    }
}