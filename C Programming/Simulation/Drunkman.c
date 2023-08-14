#include <stdio.h>
#include <math.h>
int x = 0, y = 0;

void forward()
{
    y = y + 1;
    printf("Forward Move:\t(%d, %d)\n", x, y);
}
void backward()
{
    y = y - 1;
    printf("Backward Move:\t(%d, %d)\n", x, y);
}
void left()
{
    x = x - 1;
    printf("Left Move:\t(%d, %d)\n", x, y);
}
void right()
{
    x = x + 1;
    printf("Right Move:\t(%d, %d)\n", x, y);
}

int main()
{
    int upper = 99, lower = 0;
    for(int i = 0; i < 20; i++)
    {
        int random = (rand() % (upper - lower + 1)) + lower;
        // printf("%d\t", random);
        if(random >= 0 && random < 25) forward();
        else if(random >= 25 && random < 50) backward();
        else if(random >= 50 && random < 75) left();
        else if(random >= 75 && random < 100) right();
    }
}
