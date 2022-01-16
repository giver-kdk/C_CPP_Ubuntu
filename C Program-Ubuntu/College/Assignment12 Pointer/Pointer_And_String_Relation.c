#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char *ppp="programming language";
    char **p=&ppp;
    int pp;
    printf("\n%s AND %s", *p, ppp);			//p=&ppp
    pp=strlen(*p);
    printf("\n%4d\t%4d\t%4d\t%4d\t%4d\t", pp--,pp,++pp, pp++,--pp);
    if(strcmp("abandon", "abandonment")<=0)
        pp=10;
    printf("Value of pp=%d", pp);
    getchar();
    return 0;
}
