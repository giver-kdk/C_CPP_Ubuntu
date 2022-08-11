#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void delay(int millisecond);
void digital_clock(int a, int b, int c);
int main()
{
    int h = 0, m = 0, s = 0;                                      //Default values for hour, minute and second
    char choice;
    printf("1) Set default time from zero\t2) Set manual time: ");
    scanf(" %c", &choice);
    switch(choice)
    {
        case '1':
            digital_clock(h, m, s);                               //Runs digital clock with default values
        case '2':
            printf("Enter time in HH MM SS format: ");            //Runs digital clock with cutom values
            scanf("%d%d%d", &h, &m, &s);
            digital_clock(h, m, s);
    }
}
void delay(int millisecond)
{
    clock_t starting_time = clock();                              //Store program start time
    while(clock() < starting_time + millisecond);                 //Wait till specified milliseconds
}
void digital_clock(int a, int b, int c)
{
    start:                                                        //Label to loop clock
    for(a; a < 24; a++)
    {
        for(b; b < 60; b++)
        {
            for(c; c < 60; c++)
            {
                system("cls");                                    //Clears screen(Alternative to 'clrsrc()')
                printf("-------------------\n");                  //Prints top border
                printf("| %0.2d : %0.2d : %0.2d ", a, b, c);      //Displays formatted time
                if(a < 12)
                {
                    printf("AM |\n");                           
                }
                else
                {
                    printf("PM |\n");
                }
                printf("-------------------");
                delay(1000);                                      //Makes the control wait for 1 second
            }
            c = 0;                                                //Resets value of second to 0 after complete 60 seconds
        }
        b = 0;                                                    //Resets value of minutes to 0 after complete 60 minutes 
    }
    a = 0;                                                        //Resets value of hours to 0 after complete 24 hours
    goto start;                                                   //Control goes to start: to loop clock
}