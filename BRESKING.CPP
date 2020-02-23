#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
 void pixel(int xc,int yc,int x,int y);
 int main()
  {
   int gd=DETECT,gm,xc,yc,r,x,y,d;
   clrscr();
   initgraph(&gd,&gm,"C://TURBOC3//BGI");
   setcolor(GREEN);
   rectangle(10,10,600,440);
   setcolor(LIGHTGREEN);
   rectangle(15,15,595,435);
   settextstyle(5,0,2);
   setcolor(CYAN);
   outtextxy(200,30,"Enter center of circle :");
   scanf("%d%d",&xc,&yc);
   settextstyle(7,0,1);
   setcolor(MAGENTA);
   outtextxy(190,60,"Enter radius of circle :");
   scanf("%d",&r);

   x=0;
   y=r;
   d=3-2*r;
   pixel(xc,yc,x,y);

   while(x<y)
   {
   if(d<0)
   {
   x++;
   d=d+4*x+6;
   }
   else
   {
   x++;
   y--;
   d=d+4*(x-y)+10;
   }
   pixel(xc,yc,x,y);
   }
   settextstyle(8,0,1);
   setcolor(YELLOW);
   outtextxy(170,380,"Algorithm created by Bresenham");
   outtextxy(170,400,"       Designed by Jatin Sharma");
   getch();
   closegraph();
   return 0;
}

void pixel(int xc,int yc,int x,int y)
{
delay(150);
putpixel(xc+x,yc+y,RED);
putpixel(xc+y,yc+x,WHITE);
putpixel(xc-y,yc+x,BLUE);
putpixel(xc-x,yc+y,GREEN);
putpixel(xc-x,yc-y,CYAN);
putpixel(xc-y,yc-x,LIGHTCYAN);
putpixel(xc+y,yc-x,LIGHTGREEN);
putpixel(xc+x,yc-y,MAGENTA);
}
