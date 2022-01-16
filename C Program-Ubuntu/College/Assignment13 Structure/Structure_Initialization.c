#include <stdio.h>
#include <conio.h>

void main()
{
    struct student
        {
            char name[20];
            int roll_no;
            float marks;
            char gender;
            long int phone_no;
        };
    struct student st1={"Kishor", 4, 89.5, 'M', 5010670};
    printf("Name\t\t\tRoll No.\tMarks\t\tGender\tPhone No.");
    printf("\n.........................................................................\n");
    printf("\n%s\t\t\t%d\t\t%f\t%c\t%ld", st1.name, st1.roll_no, st1.marks, st1.gender, st1.phone_no);
    getchar();
}
