/* Using pointer write a program to get n integer number and display them in ascending order
(use malloc or calloc to reserve memory).*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int temp, i, j, n, *ptr;  
	printf("Enter the number of elements: ");
	scanf("%d", &n); 
	ptr = (int *)malloc(n * sizeof(int));

    printf("Enter any %d numbers: \n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    for(i = 0; i < n; i++)     
    {
        for(j = 0; j < n - i - 1; j++)  
        {
            if(*(ptr + j) > *(ptr + j + 1))         
            {
                temp           = *(ptr + j);                
                *(ptr + j)     = *(ptr + j + 1);  
                *(ptr + j + 1) =   temp;            
            }
        }
    }
    printf("\nThe ascending order is: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr + i));
    }
    getchar();
}