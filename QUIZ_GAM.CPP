#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
 int i,j,y=75;
 void loadinggraph();
 void rules();
 //void timer();
 void result();
 int score=0;
 int gd=DETECT,gm;
 void main()
 {
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  setcolor(BLUE);//Boundary color
  for(i=3,j=602;i<=5,j>=600;i++,j--)
  rectangle(i,i,j,450-i+2);//Boundary
  settextstyle(1,0,4);//Style for Quiz Game statement
  setcolor(RED);
// setfillstyle(10,LIGHTBLUE);
// floodfill(300,300,WHITE);
// textcolor(GREEN);
  for(i=2;i<76;i++)
  {
   delay(45);
   gotoxy(i,2);
   printf("*");
   gotoxy(y--,25);
   printf("*");
  } //Star pattern printing
  outtextxy(125,15,"------------------");
  outtextxy(180,40,"||QUIZ GAME IN C||");
  outtextxy(125,65,"------------------");
  settextstyle(6,0,2);//Style for ready statement
  setcolor(GREEN);
  outtextxy(135,90,"Are you ready to enhance your knowledge...");
  setcolor(MAGENTA);
  outtextxy(210,230,"Press S to start game");
  outtextxy(210,230,"_________________");
  setcolor(LIGHTRED);
  if(getch()=='S')
   {
     outtextxy(260,410,"LOADING...");
     loadinggraph();//for Loading View
     cleardevice();
     closegraph();
     rules();
   }
 else
   {
     outtextxy(230,400,"Wrong choice!!");
     delay(800);
     cleardevice();
     closegraph();
     exit(0);
   }

 //QUIZ QUESTIONS BEGIN HERE...
   printf("\n\nQ-1:Which one is the first fully supported 64-bit operating system\n");
   printf("(a)Windows Vista\t\t(b)Mac\n(c)Linux\t\t\t(d)Windows XP\n\n\t\t");
   if((tolower(getch()=='c')))
    {
     printf("Right answer\n");
     score++;
    }
   else
     printf("Wrong answer\n");
   printf("\t\t\tPress enter to go to next-->\n");
   getch();
   clrscr();
   printf("\n\nQ-2:Computer hard disk was first introduced in 1956 by\n");
   printf("(a)Dell\t\t(b)Apple\n(c)Microsoft\t(d)IBM\n\n\t\t");
   if((tolower(getch()=='d')))
   {
    printf("Right answer\n");
    score++;
   }
 else
    printf("Wrong answer\n");
  printf("\t\t\tPress enter to go to next-->\n");
  getch();
  clrscr();
  printf("\n\nQ-3:Which of the folowing is not a web browser\n");
  printf("(a)MOSAIC\t\t(b)WWW\n(c)Facebook\t\t(d)Netscape Navigator\n\n\t\t");
  if((tolower(getch()=='c')))
  {
    printf("Right answer\n");
    score++;
  }
 else
   printf("Wrong answer\n");
  printf("\t\t\tPress enter to go to next-->\n");
  getch();
  clrscr();
  printf("\n\nQ-4:In computer world,Trojan refers to\n");
  printf("(a)Virus\t\t(b)Malware\n(c)Worm\t\t\t(d)Spyware\n\n\t\t");
  if((tolower(getch()=='b')))
    {
     printf("Right answer\n");
     score++;
    }
 else
   printf("Wrong answer\n");
  printf("\t\t\tPress enter to go to next-->\n");
  getch();
  clrscr();
  printf("\n\nQ-5:Which one of the following is a markup language\n");
  printf("(a)HTTP\t\t(b)HTML\n(c)HPML\t\t(d)FTP\n\n\t\t");
  if((tolower(getch()=='b')))
   {
    printf("Right answer\n");
    score++;
   }
 else
   printf("Wrong answer\n");
  printf("\t\t\tPress enter to go to next-->\n");
  getch();
  clrscr();
  printf("\n\nQ-6:Which protocol is used to receive email\n");
  printf("(a)SMTP\t\t(b)POP3\n(c)HTTP\t\t(d)FTP\n\n\t\t");
  if((tolower(getch()=='b')))
  {
    printf("Right answer\n");
    score++;
  }
 else
   printf("Wrong answer\n");
  printf("\t\t\tPress enter to go to next-->\n");
  getch();
  clrscr();
  printf("\n\nQ-7:Which is the oldest programming languages\n");
  printf("(a)Fortran\t\t(b)Algol\n(c)COBOL\t\t(d)LISP\n\n\t\t");
  if((tolower(getch()=='a')))
  {
    printf("Right answer\n");
    score++;
  }
 else
   printf("Wrong answer\n");
  printf("\t\t\tPress enter to go to next-->\n");
  getch();
  clrscr();
  printf("\n\nQ-7:Which protocol is used to send e-mail\n");
  printf("(a)HTTP\t\t(b)POP3\n(c)SMTP\t\t(d)SSH\n\n\t\t");
  if((tolower(getch()=='c')))
  {
    printf("Right answer\n");
    score++;
  }
 else
   printf("Wrong answer\n");
  printf("\t\t\tPress enter to go to next-->\n");
  getch();
  clrscr();
  printf("\n\nQ-9:Which computer program converts assembly language to machine language\n");
  printf("(a)Interpreter\t\t(b)Compiler\n(c)Assembler\t\t(d)Comparator\n\n\t\t");
  if((tolower(getch()=='c')))
  {
    printf("Right answer\n");
    score++;
  }
 else
  printf("Wrong answer\n");
  printf("\t\t\tPress enter to go to next-->\n");
  getch();
  clrscr();
  printf("\n\nQ-10:In which year '@' sign was first chosen for its use in email address\n");
  printf("(a)1976\t\t(b)1980\n(c)1977\t\t(d)1972\n\n\t\t");
  if((tolower(getch()=='d')))
  {
    printf("Right answer\n");
    score++;
  }
 else
  printf("Wrong answer\n");
  printf("\t\t\tPress enter to go to next-->\n");
  getch();
  clrscr();
  printf("\n\nQ-11:Which one is the latest one from PARAM SuperSeries Computers\n");
  printf("(a)PARAM Yuva II\t\t(b)PARAM 10000\n(c)PARAM Padma\t\t\t(d)PARAMnet\n\n\t\t");
  if((tolower(getch()=='a')))
  {
    printf("Right answer\n");
    score++;
  }
 else
  printf("Wrong answer\n");
  printf("\t\t\tPress enter to go to next-->\n");
  getch();
  clrscr();
  printf("\n\nQ-12:Who is also known as the father of Indian Supercomputing\n");
  printf("(a)Ragunath Mashelkar\t\t(b)Vijay Bhatkar\n(c)Jayant Narlikar\t\t(d)Nandan Nilekani\n\n\t\t");
  if((tolower(getch()=='c')))
  {
    printf("Right answer\n");
    score++;
  }
 else
  printf("Wrong answer\n");
  printf("\t\t\tPress enter to go to next-->\n");
  getch();
  clrscr();
  printf("\n\nQ-13:A folder in windows computer can't be made with the name\n");
  printf("(a)can\t\t(b)con\n(c)mak\t\t(d)make\n\n\t\t");
  if((tolower(getch()=='b')))
  {
    printf("Right answer\n");
    score++;
  }
 else
  printf("Wrong answer\n");
  printf("\t\t\tPress enter to go to next-->\n");
  getch();
  clrscr();
  printf("\n\nQ-14:A computer use which type of number system to calculate and to store data\n");
  printf("(a)decimal\t\t(b)octal\n(c)binary\t\t(d)hexadecimal\n\n\t\t");
  if((tolower(getch()=='c')))
  {
    printf("Right answer\n");
    score++;
  }
 else
   printf("Wrong answer\n");
  printf("\t\t\tPress enter to go to next-->\n");
  getch();
  clrscr();
  printf("\n\nQ-15:What is the extension type of the excel 2007 files\n");
  printf("(a).xls\t\t(b).xlsx\n(c).xsl\t\t(d)None of the above\n\n\t\t");
  if((tolower(getch()=='b')))
  {
    printf("Right answer\n");
    score++;
  }
 else
   printf("Wrong answer\n");
  printf("\t\t\tPress enter to go to next-->\n");
  getch();
  clrscr();
  printf("\n\nQ-16:The basic unit of a excel spreadsheet where we enter data is called\n");
  printf("(a)Tab\t\t(b)Box\n(c)Cell\t\t(d)None of the above\n\n\t\t");
  if((tolower(getch()=='c')))
  {
    printf("Right answer\n");
    score++;
  }
 else
   printf("Wrong answer\n");
  printf("\t\t\tPress enter to go to next-->\n");
  getch();
  clrscr();
  printf("\n\nQ-17:The maximum number of rows supported by Excel 2003 spreadsheet is\n");
  printf("(a)10,000\t\t(b)35,356\n(c)55,782\t\t(d)65,536\n\n\t\t");
  if((tolower(getch()=='d')))
  {
    printf("Right answer\n");
    score++;
  }
 else
   printf("Wrong answer\n");
  printf("\t\t\tPress enter to go to next-->\n");
  getch();
  clrscr();
  printf("\n\nQ-18:The number of rows supported by Excel 2007 spreadsheet is\n");
  printf("(a)9,68,576\t\t(b)12,15,857\n(c)13,42,554\t\t(d)10,48,576\n\n\t\t");
  if((tolower(getch()=='d')))
  {
    printf("Right answer\n");
    score++;
  }
 else
   printf("Wrong answer\n");
  printf("\t\t\tPress enter to go to next-->\n");
  getch();
  clrscr();
  printf("\n\nQ-19:What is the maximum size of a word document created\n");
  printf("(a)1MB\t\t(b)32MB\n(c)16MB\t\t(d)999KB\n\n\t\t");
  if((tolower(getch()=='b')))
  {
    printf("Right answer\n");
    score++;
  }
 else
   printf("Wrong answer\n");
  printf("\t\t\tPress enter to go to next-->\n");
  getch();
  clrscr();
  printf("\n\nQ-20:What is the maximum number of primary partitions that can be created on a hard disk\n");
  printf("(a)2\t\t(b)3\n(c)4\t\t(d)1\n\n\t\t");
  if((tolower(getch()=='c')))
  {
    printf("Right answer\n");
    score++;
  }
 else
   printf("Wrong answer\n");
  printf("\t\t\tPress enter to go to next-->\n");
  getch();
  clrscr();
  result();
  getch();
  cleardevice();
  closegraph();
}
void loadinggraph()
{
  for(i=240;i<=360;i++)
  {
   delay(40);
   rectangle(230,360,370,380);
   circle(i,370,10);
  }
}
void rules()
{
  printf("\n\n\n\t\t\t\tTERMS AND CONDITIONS\n\n");
  printf("----------------------------------------------------------------------------\n");
  printf("1.There are total of 20 questions given to you.\n");
  printf("2.Each question has four options.\n");
  printf("3.You have to press the respective key as assigned to the options\n in order to select your answer.\n");
  printf("4.Only one key has to be pressed during answering of the question.\n");
  printf("5.There is no time limit associated with the test but will be there soon.\n");
  printf("6.There will be no negative marking.\n");
  printf("7.You will be provided 1 marks for each correct question.\n\n");
  printf("  NOTE:You need at least 15 marks to qualify the quiz and you can do it.\n");
  printf("\tPress any key to start answering questions!\n");
  getch();
 clrscr();
}
/*void timer()
{
 for(i=20;i>=0;i--)
 {
  for(j=59;j>=0;j--)
  {
   delay(60);
   printf("%d:%d",i,j);
   printf("\b\b\b\b\b");

   }
 }
} */
void result()
{
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  setcolor(LIGHTCYAN);
  rectangle(3,3,600,430);
  rectangle(5,5,598,428);
  settextstyle(5,0,2);
  printf("\n\n\t\t\tQUIZ IS OVER, RESULT TIME...\n\n\n");
  delay(800);
  printf("\t\t\tYou have got %d score\n",score);
  if(score>=15)
   {
    settextstyle(8,0,3);
    outtextxy(230,180,"Qualified!!");
    setcolor(CYAN);
    setfillstyle(9,LIGHTRED);
    pieslice(5,425,0,90,40);
    pieslice(596,425,90,180,40);
    floodfill(8,420,CYAN);
    floodfill(590,420,CYAN);
    setcolor(LIGHTGREEN);
    setfillstyle(11,LIGHTBLUE);
    circle(300,400,30);
    circle(285,385,3);
    circle(315,385,3);
    arc(300,400,180,360,15);
    floodfill(300,400,LIGHTGREEN);
}
else
 {
  settextstyle(8,0,1);
  outtextxy(100,180,"Sorry, not Qualified,Better Luck Next Time");
 }
}
