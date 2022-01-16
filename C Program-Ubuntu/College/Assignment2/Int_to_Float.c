#include <stdio.h>
#include <conio.h>
void main()
{
int i=2, j=5, k=7;
float a=1.5, b=2.5, c=3.5;
a=c-i/j+c/k;
printf("\na=> %f", a);
a=(c-i)/k+(j+b)/j;
printf("\na=> %f", a);
a=b*b-((i+j)/c);
printf("\na=> %f", a);
a=b-k+j/k+i*c;
printf("\na=> %f", a);
a=c+k%2+b;
printf("\na=> %f", a);
//a=(b+4)%(c+2);                    //here we cannot use float values with '%' operator
//printf("\na=> %f", a);
getchar();
}
