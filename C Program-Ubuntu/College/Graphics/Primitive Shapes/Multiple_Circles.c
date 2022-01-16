#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	int gd = DETECT, gm, x = 320, y = 240, radius;
	char data[] = "C:\\MinGW\\lib\\libbgi.a";
	initgraph(&gd, &gm, data);
	for(radius = 25; radius <= 100; radius++)
	{
		circle(x, y, radius);
	}
	getchar();
	closegraph(0);
	return 0;
}
