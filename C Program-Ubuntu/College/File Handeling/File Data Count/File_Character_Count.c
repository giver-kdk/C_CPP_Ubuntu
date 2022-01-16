#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int line_num = 0;
    int tab_num = 0;
    int blank_num = 0;
    int char_num = 0;
    fp = fopen("Hello.txt", "r");
    while(1)                        //Infinite Loop
    {
        ch = getc(fp);
        if(ch == EOF)
        {
            break;                  //Break loop when EOF reached
        }
        char_num++;                 //Total number of character count
        if(ch == ' ')
        {
            blank_num++;
        }
        if(ch == '\t')
        {
            tab_num++;
        }
        if(ch == '\n')
        {
            line_num++;
        }
    }
    fclose(fp);
    printf("Number of character: %d\n", char_num);
    printf("Number of tab: %d\n", tab_num);
    printf("Number of blank: %d\n", blank_num);
    printf("Number of line: %d\n", line_num);
}