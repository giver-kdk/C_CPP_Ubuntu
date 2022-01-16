#include <stdio.h>

int main()
{
    FILE *fp;
    char name[20];
    int roll_num;
    char section;
    char address[20];
    float marks;
    fp = fopen("Student.txt", "w");
    printf("Enter name:\t");
    scanf("%s", name);
    printf("Enter roll number of %s:\t", name);
    scanf("%d", &roll_num);
    //At this point, buffer memory also stores previous new line character when pressed 'Enter'
    //The new line characteris assigned to the 'section' if buffer memory is not cleared
    fflush(stdin);                                  //Clears buffer memory
    printf("Enter section of %s:\t", name);
    scanf("%c", &section);                          //Since, clear buffer. So, no space before %c needed
    fflush(stdin);
    printf("Enter address of %s:\t", name);
    gets(address);
    printf("Enter marks of %s:\t", name);
    scanf("%f", &marks);
    //Store data in pointed file
    fprintf(fp, "Name: %s\nRoll Number: %d\n", name, roll_num);
    fprintf(fp, "Section: %c\nAddress: %s\nMarks: %f\n", section, address, marks);
    fclose(fp);
}