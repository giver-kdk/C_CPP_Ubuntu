#include <stdio.h>
void print_fibonacce(int num);

void main()
{
    int number;
    printf("Enter a number for Fibonacce Series: ");
    scanf("%d", &number);
    print_fibonacce(number);
	printf("\nName: Giver Khadka\tRoll No: 05\n");
}
void print_fibonacce(int num)
{
    int i, prev=0, next=1, fib1;
    for(i=1; i<=num; i++)
    {
        printf("%d\t", prev);
        fib1=prev+next;
        prev= next;
        next= fib1;
    }
}