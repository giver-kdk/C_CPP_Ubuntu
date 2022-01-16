#include <graphics.h>
#include <stdio.h>

int main()
{
	int gd = DETECT, gm, x = 320, y = 240;
	char data[] = "C:\\MinGW\\lib\\libbgi.a";
	initgraph(&gd, &gm, data);
	ellipse(x, y, 0, 360, 100, 50);
	getchar();
	closegraph(0);
	return 0;
}