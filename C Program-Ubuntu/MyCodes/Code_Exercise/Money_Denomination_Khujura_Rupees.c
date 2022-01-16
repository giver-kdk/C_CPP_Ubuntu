/*The denomination currency of Nepal is Rs.1000, Rs.500, Rs.100, Rs.50, Rs.20, Rs.10, Rs.5, Rs.2 and Rs.1.
This program calculates minimum number of each denomination to pay a sum of N.
Eg: Rs.1100 can be paid with 11 denominations of Rs.100. But, 
For minimum number of notes/coins, denominations of Rs.1000 and Rs.100 is suitable.*/
#include <stdio.h>

int find_denomination(int amount, int n[], int denomi[]);
int main()
{
    int i, count = 0, money_amount;
    int num[9], denomination[9] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    //Assign zero to all elements of 'num[9]'
    for(i = 0 ; i < 9; i++)
    {
        num[i] = 0;
    }
    //Input Amount
    printf("Enter any amount of money: ");
    scanf("%d", &money_amount);

    find_denomination(money_amount, num, denomination);
    //Output Number of Denominations
    printf("\nFor a total amount of Rs. %d\n\n", money_amount);
    for(i = 0; i < 9; i++)
    {
        if(num[i] != 0)
        {
            printf("%d note of Rs.%d is required\n", num[i], denomination[i]);
        }
    }
}
int find_denomination(int amount, int n[], int denomi[])
{
    int i, j;
    for( i = 0; amount != 0; i++)           //Amount decrements according to condition till zero 
    {
        for(j = 0 ; j < 9; j++)
        {
            if(amount >= denomi[j])     //Check if amount is just greater than maximum number
            {
                n[j]++;                     //If divisible by maximum money, increment count for that money
                amount = amount - denomi[j];//Decrement total amount by maximum money to continue
                break;                      //Exit loop to avoid re-comparison of amount with other small money
            }
        }
    }
}