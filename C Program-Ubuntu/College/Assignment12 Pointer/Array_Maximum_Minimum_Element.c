/*Program to read an array of integers using dynamic memory allocation and display the maximum and minimum value*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void minmax(int *, int);

void main()
{
    int n,i;
    int *num;
    printf("Enter no. of elements in your array:");
    scanf("%d",&n);
    num=(int *)calloc(n,sizeof(int));
    printf("\nEnter %d integers:",n);
    for(i=0;i<n;i++)
    scanf("%d",num+i);
    minmax(num, n);
    getchar();
}
void minmax(int *no, int n)
{
    int i;
    int min, max;
    max=*no;
    min=*no;
    for(i=0;i<n; i++)
    {
        if(max<*(no + i))
            max=*(no + i);
        if(min>*(no + i))
            min=*(no + i);
    }
    printf("\n The maximum number is:%d", max);
    printf("\n The minimum number is:%d", min);
}
