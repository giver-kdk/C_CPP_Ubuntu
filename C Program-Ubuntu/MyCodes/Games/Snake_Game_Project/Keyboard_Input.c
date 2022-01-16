#include <stdio.h>
#include <windows.h>
#include <time.h>
#define star printf("*********")

void delay(int millisecond)
{
    clock_t start_time = clock();
    while(clock() < start_time + millisecond);
}
int main()
{
    char ch;
    int i, j;
    for(j = 0; j < 50; j++)
    {
        if(GetAsyncKeyState(VK_UP))
        {
            printf("^");
        }
        if(GetAsyncKeyState(VK_DOWN))
        {
            printf("v");
        }
        if(GetAsyncKeyState(VK_LEFT))
        {
            printf("<");
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            printf(">");
        }
        printf("Hello How are you?\n");
        delay(500);
    }
    

}