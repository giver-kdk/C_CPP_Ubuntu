#include <stdio.h>
#include <conio.h>

/*This program reverts the program using recursion method.*/
int reverse=0;
int revert_number(int num);
int main()
{
    int number, result;
    printf("Enter any number: ");
    scanf("%d", &number);
    printf("Reverse of %d is %d", number, revert_number(number)); //Since, reverted value stored in 'reverse'.
    getchar();
}
int revert_number(int num)
{
    int r;
    if(num==0)
    {
        return(0);
    }
    r=num%10;
    reverse= reverse*10+ r;             //Expression for reversing number.
    revert_number(num/10);          
    return(reverse);
}