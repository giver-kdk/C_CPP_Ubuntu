#include <stdio.h>

int function(int num);
int main()
{
    printf("%d", function(8));
    return 0;
}
int function(int num)
{
    if(num==1)
    {
        return 0;
    }
    else
    {
        return(1+ function(num/2));
    }
}