#include <stdio.h>

int function(int num);
int main()
{
    function(3);
    return 0;
}
int function(int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        function(num-1);
        printf("%d", num);
    }
}