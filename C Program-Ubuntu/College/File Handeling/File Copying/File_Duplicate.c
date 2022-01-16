#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fs, *fd;
    char ch;
    fs = fopen("CProgram.txt", "r");
    fd = fopen("Student.txt", "w");
    while(1)                            //Infinite Loop
    {
        ch = fgetc(fs);                 //Store data from file to 'ch'
        if(ch == EOF)
        {
            break;                      //Break loop when EOF reached
        }
        else
        {
            fputc(ch, fd);              //Store data in destination file
        }
    }
    fclose(fs);                         //First, 'fs' was opened. So, it should be closed first
    fclose(fd);
}