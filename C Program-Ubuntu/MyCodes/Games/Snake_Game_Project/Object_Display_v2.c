#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>


void gotoxy(int x, int y);
void delay(int millisecond)
{
    clock_t start_time = clock();
    while(clock() < start_time + millisecond);
}

int main()
{
    int x = 0 , y = 20 , i, j;
    for(j = 0; j < 50; j++)
    {
        // if(GetAsyncKeyState(VK_UP))
        // {
        //     printf("^");
        // }
        // if(GetAsyncKeyState(VK_DOWN))
        // {
        //     printf("v");
        // }
        // if(GetAsyncKeyState(VK_LEFT))
        // {
        //     printf("<");
        // }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            gotoxy(x + 5, y);
        }
        printf("Hello How are you?\n");
        delay(500);
    }
    
}
void gotoxy(int x, int y)
{
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}