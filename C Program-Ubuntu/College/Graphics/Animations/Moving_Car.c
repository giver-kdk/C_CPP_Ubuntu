#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <direct.h>

int main()
{
	int i, j = 0;
	int gd = DETECT, gm, x = 320, y = 240, radius;
	char data[] = "C:\\MinGW\\lib\\libbgi.a";
	initgraph(&gd, &gm, data);
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
	outtextxy(25, 240, "Press Any Key to view Moving Object");
	getchar();
	for(i = 0; i <= 420; i = i + 10, j++)
	{
		rectangle(50 + i, 275, 150 + i, 400);
		rectangle(150 + i, 350, 200 + i, 400);
		circle(75 + i, 410, 10);
		circle(175 + i, 410, 10);
		setcolor(j);
		delay(100);
		if(i == 400)
		{
			break;
		}
		if(j == 15)
		{
			j = 2;
		}
		cleardevice();
	}
	getchar();
	closegraph(0);
	return 0;
}
