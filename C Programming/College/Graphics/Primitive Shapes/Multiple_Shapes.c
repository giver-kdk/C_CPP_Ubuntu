#include <graphics.h>
#include <conio.h>

int main()
{
	int gd = DETECT, gm, x = 320, y = 240, radius;
	char data[] = "C:\\MinGW\\lib\\libbgi.a";
	initgraph(&gd, &gm, data);
	line(100, 200, 100, 100);
	circle(100, 200, 75);
	rectangle(200, 100, 300, 400);
	getchar();
	closegraph(0);
	return 0;
}