#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>

void main()
{
clrscr();
int gd=DETECT,gm,x,car,window,wheel,wing;
int a;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(BLACK);
cout<<"\t\t\t     ENTER 1 Too SEE CAR"<<endl<<"\t\t\t\t\t\b\b\b\b ";
cin>>x;
if(x==1)
{
cout<<"ENTER YOUR CHOOSE FOR BACKGROUND COLOR/CAR COLOR/CAR WINDOW COLOR/CAR WHEELS COLOR/CAR WING COLOR"<<endl<<"0:BLACK\t1:BLUE\t2:GREEN\t 3:CYAN\n4:RED\t5:PINK\t6:ORANGE 7:GREY\n8:DARK GREY\t9:PERSION BLUE\n10:LIGTH GREEN\t11:CYAN\n12:LIGHT RED";
cout<<"\t13:LIGHT PINK \n14:YELLOW\t15:WHITE "<<endl;
cout<<"\nBACKGROUND:";
cin>>a;
cout<<"CAR:";
cin>>car;
cout<<"WINDOW:";
cin>>window;
cout<<"WHEEL:";
cin>>wheel;
cout<<"WING:";
cin>>wing;

setbkcolor(a);
for(int i=0;i<500;++i)
{
//roaD
line(1,435,1630,440);
//car part
setcolor(WHITE);
setfillstyle(SOLID_FILL,car);
//1
line(630-i,400,630-i,260);
//2
line(630-i,400,610-i,410);
//3
arc(570-i,401,-10,196,43);
//4
line(370-i,413,529-i,413);
//5
arc(332-i,401,-15,198,40);
//6
line(230-i,413,294-i,413);
//7
line(230-i,413,205-i,375);
//8
line(230-i,335,205-i,375);
//9
line(230-i,335,320-i,335);
//10
line(390-i,290,320-i,335);
//11
line(390-i,290,530-i,290);
//12
line(630-i,335,530-i,290);
floodfill(600-i,360,WHITE);
setfillstyle(SOLID_FILL,wing);
//13
line(630-i,335,590-i,260);
//14
line(630-i,260,590-i,260);
floodfill(620-i,290,WHITE);
//CAR first window
setcolor(WHITE);
setfillstyle(SOLID_FILL,window);
//1
line(390-i,299,450-i,299);
//2
line(450-i,337,450-i,299);
//3
line(450-i,337,330-i,337);
//4
line(389-i,299,330-i,337);
floodfill(400-i,310,WHITE);
//car second window
setcolor(WHITE);
setfillstyle(SOLID_FILL,window);
//1
line(459-i,337,459-i,299);
//2
line(459-i,299,530-i,299);
//3
line(616-i,337,530-i,299);
//4
line(615-i,336,460-i,337);
floodfill(500-i,310,WHITE);
//wheels
setcolor(WHITE);
setfillstyle(SOLID_FILL,wheel);
circle(332-i,400,33);
circle(570-i,400,36);
floodfill(572-i,400,WHITE);
floodfill(332-i,400,WHITE);
delay(20);
cleardevice();
}
}
else
{
system("cls");
setbkcolor(RED);
cout<<"\n\n\n\n\n\n\t\t     PRoBEBLY YOU HAVE ENTER SOMETHING |WORNG ";
}




getch();
}