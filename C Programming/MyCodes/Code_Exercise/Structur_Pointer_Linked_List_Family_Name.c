/*This program uses self - referential structure pointer and prints name of person, father and grandfather
using pointer pointing to person.*/
#include <stdio.h>

struct person
{
    char name[20];
    struct person *ptr1;        //Pointer variable of type struct person
};
int main()
{
    struct person son = {"Ram", NULL};          //Since, 'ptr1' is also a member of structure person. So, NULL can be initialized for it
    struct person father = {"ShreeRam", NULL};
    struct person grandfather = {"HareRam", NULL};
    struct person *ptr = &son;                  //New structure person type pointer pointing to son
    son.ptr1 = &father;           
    father.ptr1 = &grandfather;
    //ptr->name = *(ptr).name = *(&son).name = son.name            
    //ptr->name means name of structure pointed by pointer 'ptr'
    printf("Name of son: %s", ptr->name);   
    //ptr->ptr1->name = *(ptr).ptr1->name = *(&son).ptr1->name = son.ptr1->name = *(son.ptr1).name = *(&father).name = father.name
    //ptr->ptr1->name means name of structure pointed by 'ptr1' which is again pointed by 'ptr'
    printf("\nName of father: %s", ptr->ptr1->name);
    /*
    ptr->ptr1->ptr1->name = *(ptr).ptr1->ptr1->name = *(&son).ptr1->ptr1->name = son.ptr1->ptr1->name = *(son.ptr1).ptr1->name = 
    *(&father).ptr1->name = father.ptr1->name = *(father.ptr1).name = *(&grandfather).name = grandfather.name
    */
    printf("\nName of grandfather: %s", ptr->ptr1->ptr1->name);
}