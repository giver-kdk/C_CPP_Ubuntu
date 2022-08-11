/*This program sorts the entered numbers inascending order using recirsive function call*/
#include <stdio.h>
#include <conio.h>
#define SIZE 100
void sort(int nums[], int);
void main()
{
    int nums[SIZE], i, n;
    printf("\n How many numbers you want to sort(<100)?:\t");
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &nums[i]);
    sort(nums, n);		//routine (function) call
    getchar();
}

void sort(int nums[], int n)
{
int i, j, temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(nums[i]>nums[j])
			{
			temp=nums[i];
			nums[i]=nums[j];
			nums[j]=temp;
			}
		}

	}
printf("\nThe numbers in ascending order are:\n");
for(i=0;i<n;i++)
	printf("\t%d", nums[i]);
}
