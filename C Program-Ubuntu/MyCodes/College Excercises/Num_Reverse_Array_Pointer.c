/*Program using pointer to read in an array of integers and print its elements in reverse order*/
#include<stdio.h>
#include<conio.h>
#define MAX 30
 
void main() 
{
   int size, i, arr[MAX];
   int *ptr;
 
   ptr = &arr[0];
 
   printf("\nEnter the size of array : ");
   scanf("%d", &size);
 
   printf("\nEnter %d integers into array: ", size);
   for (i = 0; i < size; i++) {
      scanf("%d", ptr);
      ptr++;
   }
 
   ptr = &arr[size - 1];
 
   printf("\nElements of array in reverse order are :");
 
   for (i = size - 1; i >= 0; i--) {
      printf("\nElement%d is: %d", i, *ptr);
      ptr--;
   }
 
   getchar();
}