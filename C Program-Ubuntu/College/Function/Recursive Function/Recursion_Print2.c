#include <stdio.h>

/*This program prints 3 2 1 using recursion function.*/
int print_fx(int num);

int main()
{
    int number=3;
    print_fx(number);
    return 0;
}
int print_fx(int num)
{
    if(num==0)
    {
        return(0);
    }
    else
    {
        printf("%d\t", num);
        return(print_fx(num-1));
    }
}