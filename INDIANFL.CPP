#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
//INDIAN FLAG LIKE STRUCTURE DESIGNED BY JATIN SHARMA...
//NOT ACCURATE BUT LIKELY SIMILAR...
//ENJOY THE ART!
 void main()
 {
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  setcolor(RED);
  for(int i=201;i<=400;i++)
   {
    delay(10);
    rectangle(200,100,i,130);//first
     }
  setcolor(WHITE);
  for(i=201;i<=400;i++)
   {
     delay(10);
     rectangle(200,130,i,160);//second
     }
  setcolor(GREEN);
  for(i=201;i<=400;i++)
  {
   delay(10);
   rectangle(200,160,i,190);//third
   }
  setcolor(BLUE);
  for(i=1;i<=15;i++)
   {
     delay(40);
     circle(300,145,i);//inner circle
     }
  circle(300,145,2);
  setcolor(BROWN);
  for(i=191;i<=200;i++)
   {
     delay(55);
     rectangle(190,100,i,430);//left stick
      }
  setcolor(7);
  for(i=161;i<=230;i++)
   {
     delay(15);
     rectangle(160,430,i,440);//pad1
     }
  setcolor(DARKGRAY);
  for(i=151;i<=240;i++)
   {
     delay(15);
     rectangle(150,440,i,450);//pad2
      }
  setcolor(LIGHTGRAY);
  for(i=141;i<=250;i++)
   {
     delay(15);
     rectangle(140,450,i,460);//pad3
    }
  setcolor(DARKGRAY);
  for(i=131;i<=260;i++)
   {
     delay(15);
     rectangle(130,460,i,470);//pad4
    }
  setcolor(LIGHTRED);
  for(i=1;i<=8;i++)
   {
     delay(50);
     circle(195,95,i);//left stick top circle
    }
    for(i=91;i<=270;i++)
    {
    delay(25);
    arc(200,170,90,i,70);//rope style upwards
    }
    for(i=271;i<=450;i++)
    {
    delay(25);
    arc(200,320,270,i,80);//rope style downwards
    }
  settextstyle(7,0,2);
  outtextxy(440,350,"NATIONAL FLAG");
  outtextxy(440,390,"TIME TO SALUTE!!");
  for(i=0;i<=15;i++)
  {
  delay(80);
  setbkcolor(i);
  }
  setbkcolor(BLACK);

  getch();
  closegraph();
}
