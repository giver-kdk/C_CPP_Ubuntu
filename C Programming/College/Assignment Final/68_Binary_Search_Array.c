/* Program to search an element in array using binary search*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int i, j, num, element, temp, initial, middle, end;
	printf("Enter the number of elements: ");
	scanf("%d", &num);
	int array[num];
	printf("Enter any %d elements:\n", num);
	
	for(i = 0; i < num; i++)
	{
		scanf("%d", &array[i]);
	}
	initial = 0;
	end = num - 1;
	// Sort in Ascending order
	for(i=0; i < num; i++)     
    {
        for(j = 0; j < num - i - 1; j++)  
        {
            if(array[j] > array[j + 1])         
            {
                temp = array[j];                
                array[j] = array[j+1];  
                array[j+1] = temp;            
            }
        }
    }
	printf("Sorted Array is:\n");
	for(i = 0; i < num; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\nEnter the element to search: ");
	scanf("%d", &element);

	while(1)
	{
		middle = (initial + end) / 2;
		if(array[middle] == element)
		{
			printf("Found Element: %d", element);
			getchar();
			exit(0);
		}
		else if(array[middle] > element)
		{
			end = middle - 1;
		}
		else if(array[middle] < element)
		{
			initial = middle + 1;
		}
		if(initial > end)
		{
			printf("Element not found");
			getchar();
			exit(0);
		}
	}
	getchar();
}