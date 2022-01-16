#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    FILE *fp;
    char ch = 'y';
    struct student
    {
        char name[20];
        int roll_num;
        float marks;
    }s1, s2;
    fp = fopen("Student.txt", "wb");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    while(ch == 'y')
    {
        printf("\nEnter the name: ");
        scanf("%s", s1.name);
        printf("Enter the roll number: ");
        scanf("%d", &s1.roll_num);
        printf("Enter the marks: ");
        scanf("%f", &s1.marks);
        //fwrite stores a block of data(structure, array, etc.) to file
        fwrite(&s1, sizeof(s1), 1, fp);                   //Write the structure data into pointed file
        printf("Do you want to add more record? ");
        ch = getche();
    }
    fclose(fp);
    fp = fopen("Student.txt", "rb");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    //fread stores block of data from file to another block of variable(struct student s2)
    while((fread(&s2, sizeof(s2), 1, fp)) != 0)      //'fread' returns 0(NULL) when EOF reached
    {
        printf("\nName: %s\n", s2.name);
        printf("Roll number: %d\n", s2.roll_num);
        printf("Marks: %f\n", s2.marks);
    }
    fclose(fp);
}