/*This program converts actual integer number into number character array using atof function.*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int integer;
    char string[25];
    printf("\nEnter an integer:\t");
    scanf("%d",&integer);
    
    printf("Integer=%d String=%s",integer,itoa(integer,string,10)); //Here, 10 means decimal radix
    //itoa returns pointer to the resulting string
    printf("\n%u %u",itoa(integer,string,3),string);
}
