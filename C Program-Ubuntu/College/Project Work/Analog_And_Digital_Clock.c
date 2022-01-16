/*This program is a hybrid clock. Source code from C Programming text book.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
#include <math.h>
#include <direct.h>
#include <process.h>
#include <windows.h>

void frame();
void draw_Numbers(int, int, int);
void line_at_angle(int, float, int);
void clear(int, int, int, int, int);

int main()
{
	// ANALOG CLOCK : 
	SYSTEMTIME t;											//Creates a systemtime data type variable to store time
	//systemtime structure has wSecond, wMinute, wHour, wMillisecond,...etc as members
	int gd = DETECT, gm, errorcode;
	char data[] = "C:\\MINGw\\lib\\libbgi.a";
	int key, k = 0, x, y, midx, midy, t_sec, t_min, t_hour;
	char tim[5];
	float hour, ang_sec, ang_min, ang_hour;

	initgraph(&gd, &gm, data);
	GetLocalTime(&t);										//Store system time in 't'
	midx = getmaxx() / 2;									//Store mid point value of screen
	midy = getmaxy() / 2;
	frame();
	while(1)
	{
		if(kbhit())											//'kbhit' returns zero unless any keyboard pressed
		{
			key = getchar();
			if(key == 27)									// 27 = ASCII value of ESC character
			{
				break;										// Exit program 
			}
		}
		GetLocalTime(&t);
		if(t.wHour >= 12)
		{
			hour = t.wHour - 12;							// Change 24 hrs format to AM - PM format
		}
		else
		{
			hour = t.wHour;
		}
		ang_sec = t.wSecond * 6;							// COnvert second value into angle in degree
		ang_min = (t.wMinute * 6) + (ang_sec / 60);			// Convert minute value into angle in degree
		ang_hour = (hour * 30) + (ang_min / 12);			// Convert hour value into angle in degree
		setcolor(4);
		setfillstyle(1, 9);
		circle(midx, midy, 6);
		line_at_angle(150, ang_min, 2);						// Line for Minute
		setcolor(12);
		setfillstyle(1, 4);
		line_at_angle(130, ang_hour, 3);					// Line for Hour
		setcolor(14);
		line_at_angle(170, ang_sec, 1);						// Line for Second
		line_at_angle(20, 180 + ang_sec, 1);				// Line for Second's back side
		setfillstyle(1, 4);
		// DIGITAL CLOCK
		setcolor(13);
		x = 520, y = 460;									// Specify standrad coordinate
		GetLocalTime(&t);									// Store system time
		if(t.wHour > 12)
		{
			char p[] = "PM";						
			outtextxy(x + 80, y, p);				// Display text on specified position
			// %d value is stored in 'tim' as character/string
			sprintf(tim, "%d", t.wHour - 12);		// Store formatted string in 'tim'
		}
		else
		{
			char a[] = "AM";
			outtextxy(x + 80, y, a);	
			sprintf(tim, "%d", t.wHour);
		}
		char dash[] = ":";
		// Print the digital time in required position
		outtextxy(x, y, tim);
		outtextxy(x + 16, y, dash);
		outtextxy(x + 42, y, dash);
		sprintf(tim, "%d", t.wMinute);
		outtextxy(x + 26, y, tim);
		sprintf(tim, "%d", t.wSecond);
		outtextxy(x + 50, y, tim);
		k++;								// Counter
		if(k == 10)
		{
			k = 0;
			Beep(500, 250);					// Produces beeping sound(Defined in windows.h)
			//Beep(frequency, duration);
		}
		else
		{
			delay(45);						// Stops the program for specified milliseconds
		}
		t_sec = t.wSecond;
		t_min = t.wMinute;
		clear(x + 50, y, x + 70, y + 8, 0);
		// Clear area of 'second' 
		if(t_sec > 59)
		{
			clear(x + 26, y , x + 46, y + 26, 0);
		}
		if(t_min > 59)
		{
			clear(x , y, x + 20, y + 8, 0);
		}
		setcolor(0);
		setfillstyle(1, 0);								// Solid Black fill
		// Clear screen for lines
		line_at_angle(130, ang_hour - 6, 1);
		line_at_angle(150, ang_min - 4, 1);
		line_at_angle(170, ang_sec, 1);
		line_at_angle(20, ang_sec + 180, 1);
		ang_sec++;										// Second Counter
	}
	closegraph(0);
	return 0;
  } 
void frame()
{	// Clock display
	int midx, midy, i;
	float angle = 0, x, y;
	midx = getmaxx() / 2;
	midy = getmaxy() / 2;
	setlinestyle(1, 1, 3);								// Dotted line style
	setcolor(2);
	// Circle made from thick dotted lines
	circle(midx, midy, 223);
	setcolor(15);
	circle(midx, midy, 220);
	setcolor(12);
	circle(midx, midy, 217);
	setlinestyle(1, 1, 3);
	setfillstyle(1, 2);
	setcolor(4);
	for(i = 0; i < 60; i++)
	{
		x = cos((angle / 180) * M_PI) * 190;
		y = sin((angle / 180) * M_PI) * 190;
		if((int)angle % 30 != 0)
		{
			circle(midx + x, midy + y, 2);
			angle += 6;
		}
	}
	angle = 0;
	setfillstyle(1, 4);
	setlinestyle(0, 1, 2);
	// Draw numbers on circular pattern
	for(i = 0; i < 12; i++)
	{
		setcolor(13);
		//Set coordinate for printing numbers
		x = cos((angle / 180) * M_PI) *190;
		y = sin((angle / 180) * M_PI) *190;
		setcolor(10);
		draw_Numbers(midx + x, midy + y, i);
		angle += 30;										// Increment angle for next coordinate
	}
} 
void line_at_angle(int radius, float angle, int flag)
{
	float x, y, x1, y1, x2, y2, x3, y3;
	int midx, midy;
	int poly1[10];
	// Angle is measured from '12' of clock which is at 90 degree
	angle -= 90;												// Reduce 90 degree form original angle
	midx = getmaxx() / 2;
	midy = getmaxy() / 2;
	//Get coordinates to point the line on clock
	x = cos((angle / 180) * M_PI) * radius;						// (angle / 180) * M_PI converts degree to radian
	y = sin((angle / 180) * M_PI) * radius;						// sin(Theta) = p / h
	setlinestyle(0, 1, 3);
	if(flag == 1)												// Flag 1 for 'second' line
	{
		line(midx, midy, midx + x, midy + y);					//Line draw according to coordinates
	}
	else if(flag == 2)											// Flag 2 for 'minute' line
	{
		setlinestyle(0, 1, 1);
		// Coordinate for stylish 'minute' line borders
		x2 = cos(((angle + 3) / 180) * M_PI) * (radius - 25);	
		y2 = sin(((angle + 3) / 180) * M_PI) * (radius - 25);
		x3 = cos(((angle - 3) / 180) * M_PI) * (radius - 25);
		y3 = sin(((angle - 3) / 180) * M_PI) * (radius - 25);
		// 'poly1' starts from and ends at (minx, midy)
		poly1[0] = midx;									// Store coordinates in array
		poly1[1] = midy;
		poly1[2] = midx + x2;
		poly1[3] = midy + y2;
		poly1[4] = midx + x;
		poly1[5] = midy + y;
		poly1[6] = midx + x3;
		poly1[7] = midy + y3;
		poly1[8] = midx;
		poly1[9] = midy;
		fillpoly(5, poly1);									// Creates and fills a custom polygon shape
		setcolor(0);										// Black Color
		// Get coordinates for erasing purpose
		x2 = cos(((angle) / 180) * M_PI) * (radius + 1);
		y2 = sin(((angle) / 180) * M_PI) * (radius + 1);
		x3 = cos(((angle - 4) / 180) * M_PI) * (radius - 25);
		y3 = sin(((angle - 4) / 180) * M_PI) * (radius - 25);
		// Create black lines to clear screen
		line(midx + x2, midy + y2, midx + x3, midy + y3);		
		line(midx + x, midy + y, midx + x3, midy + y3);
	}
	else if(flag == 3)
	{
		setlinestyle(0, 1, 1);								// Line pattern 
		// Get coordinates for stylish line
		x2 = cos(((angle + 5) / 180) * M_PI) * (radius - 30);
		y2 = sin(((angle + 5) / 180) * M_PI) * (radius - 30);
		x3 = cos(((angle - 5) / 180) * M_PI) * (radius - 30);
		y3 = sin(((angle - 5) / 180) * M_PI) * (radius - 30);

		poly1[0] = midx;
		poly1[1] = midy;
		poly1[2] = midx + x2;
		poly1[3] = midy + y2;
		poly1[4] = midx + x;
		poly1[5] = midy + y;
		poly1[6] = midx + x3;
		poly1[7] = midy + y3;
		poly1[8] = midx;
		poly1[9] = midy;

		fillpoly(5, poly1);
		setcolor(0);											
		// Coordinates to erase line
		x2 = cos(((angle) / 180) * M_PI) * (radius + 1);
		y2 = sin(((angle) / 180) * M_PI) * (radius + 1);
		x3 = cos(((angle - 6) / 180) * M_PI) * (radius - 30);
		y3 = sin(((angle - 6) / 180) * M_PI) * (radius - 30);
		line(midx + x2, midy + y2, midx + x3, midy + y3);
		line(midx + x, midy + y, midx + x3, midy + y3);
	}
}
void draw_Numbers(int x, int y, int position)
{
	char stpos[5] = " ";
	// Printing starts from 3
	position += 3;
	if(position > 12)
	{
		position = position % 12;							// If position == 14, then position = 2
	}
	itoa(position, stpos, 10);								//Converts integer to string
	outtextxy(x, y, stpos);
}
void clear(int x1, int y1, int x2, int y2, int col)
{
	int x, y;
	for(x = x1; x <= x2; x++)
	{
		for(y =y1; y <= y2; y++)
		{	
			putpixel(x, y, col);					//Puts a colored(black) pixel at specified position
		}
	}
}