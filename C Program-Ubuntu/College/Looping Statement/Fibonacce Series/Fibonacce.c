#include <stdio.h>
int main()
{
    int a=1, b=1, c, n;
 
    printf("enter the number upto fibonacci sequence:\t");
    scanf("%d",&n);
    //printf("%d\t", a);
    do{
        c=a+b;
        a=b;
        b=c;
        printf("%d\t", c);
    }while(c<n);
}