#include<stdio.h>

#include<conio.h>

#include<math.h>

#include<graphics.h>

#include<direct.h>

int main()

 

{

 

 int gd=DETECT,gm,i,y,x,s,m,h,l;

 float pi=3.14;

 initgraph(&gd,&gm,"C:\\MINGw\\lib\\libbgi.a");
 x=getmaxx()/2;

 y=getmaxy()/2;

settextstyle(3,0,3);

 outtextxy(x-100,y-100,"DIGITAL AND ANALOG CLOCK");

 getchar();

 printf("\n Digital And Analog Clock");

 printf("\n Set Time:- \n");

 printf(" Hour:- ");

 scanf("%d",&h);

 printf(" Minute:- ");

 scanf("%d",&m);

 printf(" Second:- ");

 scanf("%d",&s);

printf(" till:- ");    //how many the clock is to be display

 scanf("%d",&l);

 cleardevice();

 settextstyle(1,0,1);

 for(i=0;i<l;i++)

 {

  //clock//

  circle(x,y,200);

  circle(x,y,199);

 

line(x,y-200,x,y-180);

line(x,y+200,x,y+180);

line(x-200,y,x-180,y);

line(x+200,y,x+180,y);

  if(s==60)

  {

   s=0;

   m++;

  }

  if(m==60)

  {

   m=0;

   h++;

  } 

line(x,y,x+75*sin(h*pi/6),y-75*cos(h*pi/6));  //hour hand //

 line(x,y,x+150*sin(m*pi/30),y-150*cos(m*pi/30));        

 //min hand //

  line(x,y,x+175*sin(s*pi/30),y-150*cos(s*pi/30)); 

//sec. hand //

  printf("%d:%d:%d:",h,m,s);

  s++;

  delay(1000);

printf("\b\b\b\b\b\b\b\b");

 cleardevice();

 }

 

 getchar();

 closegraph(0);
 return 0;
}