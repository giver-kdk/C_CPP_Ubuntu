/*Program to display name, type(LCD, LED or CRT) and manufactured year of a television. Also uses funtions
like display and swap for TV informations. Pointers are used when passing structure into function.*/
#include <stdio.h>

enum tv_type            //Enumeration data type declaration similar to structure data type
{LED, LCD, CRT};        //'enum' Contants/ Integral Constants
//NOTE: Default value of enum constants (starts from 0 and increments by 1) unless initialized manually.
struct television
{
    char name[20];
    enum tv_type type1;     //'enum' variable
    int mfd;
};
void display(struct television *ptr);       //Function Argument as structure pointer
void swap(struct television *ptr1, struct television *ptr2);

int main()
{
    struct television t1 = {"Huawei", LED, 2013}, t2 = {"Sony", CRT, 1999};        //Here, LED and CRT are integral constants 

    display(&t1);
    display(&t2);

    swap(&t1, &t2);
    printf("\nAfter swaping manufature year:\n");
    display(&t1);
    display(&t2);
}
void display(struct television *ptr)
{
    printf("\nTV name: %s", ptr->name);     //For t1, ptr->name = *(ptr).name = *(&t1).name = t1.name
    if(ptr->type1 == LED)
    {
        printf("\nTV type: LED");
    }
    else if(ptr->type1 == LCD)
    {
        printf("\nTV type: LCD");
    }
    else if(ptr->type1 == CRT)
    {
        printf("\nTV type: CRT");
        printf("\nThis TV can be harmful for your eyes!");
    }
    printf("\nTV manufacture year: %d", ptr->mfd);
}
void swap(struct television *ptr1, struct television *ptr2)
{   //Swap 'mfd's of televisions pointed by ptr1 and ptr2
    int temp;
    temp = ptr1->mfd;
    ptr1->mfd = ptr2->mfd;
    ptr2->mfd = temp;
}
