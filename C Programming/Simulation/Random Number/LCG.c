#include <stdio.h>

int main()
{
    int a, c, m, x0, x1;
    float r;
    printf("Enter value of x0: ");
    scanf("%d", &x0);
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of c: ");
    scanf("%d", &c);
    printf("Enter value of m: ");
    scanf("%d", &m);

    x1 = x0;
    for(int i = 0; i < 20; i++)    
    {
        x1 = (a*x1 + c) % m;
        r = x1 / m;
        printf("%d\t", x1);
    }
}
