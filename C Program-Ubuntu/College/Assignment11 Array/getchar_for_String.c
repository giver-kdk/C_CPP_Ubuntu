/*Thi sprogram takes string input using getchar function*/
#include <stdio.h>
#include <conio.h>
void main()
{
    char name[30], character;
    int c;
    c=0;
    printf("\nEnter your full name (Press Enter at the end):\n");
    do
    {
    character=getchar();                                    //Store entered character in 'character'
    name[c]=character;                                      //Store 'character' data in cth place of 'name'
    c++;
    }while(character!='\n');                                //Loop exits when pressed 'Enter'

    c=c-1;                                                  //Get 'c' to final index
    name[c]='\0';
    printf("\nYour name is %s", name);
    getchar();
}
