#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <graphics.h>

int main()
{
	int gd = DETECT, gm;
	char data[] = "C:\\MINGw\\lib\\libbgi.a";
	initgraph(&gd, &gm, data);
	circle(200, 200, 100);
	circle(200, 200, 20);
	rectangle(100, 100, 300, 150);
	circle(500, 200, 100);
	circle(500, 200, 20);
	rectangle(400, 100, 600, 150);
	line(500, 400, 200, 400);
	getchar();
	closegraph(0);
	return 0;
}