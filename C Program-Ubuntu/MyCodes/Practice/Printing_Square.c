#include <stdio.h>
int main()
{
    int i, j, n=15;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i==0||i==n-1)||(j==0||j==n-1))
            {
                printf("* ");
            }
            else
            {
                if((i==n/2)&&(j==n/2))
                {
                    printf("i ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}