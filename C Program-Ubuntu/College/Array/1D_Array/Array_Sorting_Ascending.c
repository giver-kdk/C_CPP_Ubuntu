/*This program sorts array elements in Ascending Order by Bubble Sort Algorithm: 

1) Compare 1st and 2nd elements and swap them at a condition(1st > 2nd)
2) Then compare 2nd and 3rd elements and swap them at a condition(2st > 3rd)
3) Continue this process till 2nd last and last elements.
4) Now, the last element is the greatest number.

5) Similary, compare and swap numbers again. But by excluding the last element.
6) Hence, the 2nd last element is the 2nd greatest number.

7) Repeat process untill all the greatest elements are sorted from last end of array memory.*/

#include <stdio.h>
#include <conio.h>
#define size 5
void main()
{
    int temp, i, j, array[size];            //Array can have symbolic constant  as its size
    printf("Enter any five numbers: \n");
    for(i=0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=0; i < size; i++)      //Number of loop less than numbers of array elements by 1
    {
        for(j = 0; j < size - i; j++)    //Iteration/Looping decreases as 'i' increases
        {
            //Take all the larger numbers towards ending side of array
            if(array[j] > array[j + 1])         
            {
                temp = array[j];                //Swaps the numbers if jth element is greater than (j + 1)th
                array[j] = array[j+1];  
                array[j+1] = temp;            
            }
        }
    }
    printf("\nThe ascending order is: \n");
    for(i=0; i<=size-1; i++)
    {
        printf("%d\n", array[i]);
    }
}
/*NOTE: The elements of Array actually get arraged in Ascending Order inside memory of array.*/