#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main()
{
	int gd = DETECT, gm;
	char data[] = "C:\\MinGW\\bin\\libbgi.a";
	initgraph(&gd, &gm, data);
	circle(200, 200, 100);
	getchar();
	closegraph(0);
}
