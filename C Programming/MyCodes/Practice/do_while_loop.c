#include <stdio.h>
#include <conio.h>
/*This program shows function of do while loop. Use this loop when 
u want the loop to run at least once at first.*/
int main()
{
    char choice;  
    do{                                                 //Body code inside do
        printf("\nHello, Nice to meet you!\n");
        printf("Press N to exit: ");
        choice=getche();
    }while(choice!='n');                    /* while(condition);   Here, semicolon';'is used to indicate this 
                                                                while function here is not usual while loop 
                                                                and its syntax ends up here*/
}