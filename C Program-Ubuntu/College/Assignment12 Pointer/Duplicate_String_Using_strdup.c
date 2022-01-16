#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char str[20]="Lok Prakash Pandey";
    char *dup_str;
    int i;
    dup_str=strdup(str);                    //Creates same string in different address of dup_str
    for(i=0;i<strlen(str);i++)
    printf("\nstr[%d]=%u",i,&str[i]);
    printf("\nstr=%u",&str);

    for(i=0;i<strlen(str);i++)
    printf("\ndup_str[%d]=%u",i,&dup_str[i]);
    printf("\n&dup_str=%u,dup_str=%u",&dup_str,dup_str);

    printf("\nsize of dup_str=%d",sizeof(dup_str));

    printf("\nstr contains:%s",str);
    printf("\ndup_str contains:%s",dup_str);
    free(dup_str);
}
