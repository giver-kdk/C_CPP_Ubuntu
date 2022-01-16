#include <stdio.h>//code 2
void main()
{
    FILE *fp;
    char a[30];
    fp=fopen("first.txt","r+");
    fgets(a,14,fp);
    printf("Reading content of the file:%s\n",a);
    fseek(fp,0,0);
    fputs("Gyan Sita Goapl",fp);
    rewind(fp);
    fgets(a,20,fp);
    printf("Change information is: %s\n",a);
    fclose(fp);
}