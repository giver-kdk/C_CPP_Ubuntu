#include <stdio.h> //code 1
#include <stdlib.h>

void main()
{
    FILE *fp;
    char a[50];
    int i;
    fp = fopen("first.txt", "w");
    fputs("Ram Gita Hari", fp);
    fclose(fp);

    fp = fopen("first.txt", "r");
    fgets(a, 20, fp);
    fclose(fp);

    fp = fopen("first.txt", "r+");
    printf("Reading content of the file:%s\n", a);
    fputs("Gyan Sita Gopal", fp);
    rewind(fp);
    fgets(a, 20, fp);
    printf("Change information is: %s\n", a);
    fclose(fp);
}