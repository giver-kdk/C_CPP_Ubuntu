#include <stdio.h>
#include <time.h>

int main()
{
    int millisecond = 1000;                     //Number of milliseconds to delay/wait = 1000 = 1 second  
    //Store exact initial time in processor at which program started  
    //clock() value starts from 0 and program starting can be any number according to the eplased time(in milliseconds)             
    clock_t start_time = clock();       //Normally, Clock time is stored in variable of type 'clock_t'. Even though type 'int' is valid 
    //Sytem time represented by clock() increments automatically in milliseconds
    while (clock() < start_time + millisecond); //Control doesn't exits the loop until system time is less than initial time + added time
    //ie; Control waits for specified time assigned in 'millisecond'

}
