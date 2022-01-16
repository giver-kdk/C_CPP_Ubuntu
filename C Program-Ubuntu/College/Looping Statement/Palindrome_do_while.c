#include <stdio.h>
#include <conio.h>
/*This program checks if the entered number is Palindrome or not.
Palindrome numbers are numbers which remain same even after reversing all its digits*/
int main()
{
    int n, reverse=0, r, t;
    printf("Enter any numer: ");
    scanf("%d", &n);
    t=n;
    do{
        r=n%10;        //Remainder saves the last digit of number
        reverse=reverse*10+r;  //Adds up the remainder with reverse's 10th multiple 
                                //which gives to give reverse form of entered number after completing loop
        n=n/10;
    }while(n!=0);
    if(t==reverse)      //checks if the entered and reversed numbers are same or not
    {
        printf("Entered number is Palindrome");
    }
    else
    {
        printf("Entered number is not a Palindrome");
    }
}