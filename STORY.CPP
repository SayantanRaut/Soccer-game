#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<string.h>
#include<graphics.h>
#include<process.h>
#include<stdlib.h>
#include<ctype.h>
#include<bios.h>
#include<time.h>
#include<math.h>
//ctype.h for toupper

int i,xst=150,yst=300,sst=10;        //loop variable
float carx=100,cary=250;
int gx=400,gy=140,gr=10;      //////// GOAL KEEPER COORDINATES
int KEEPFLAG=0;        //1 for alternate keeper

void KEEPER(int gx,int gy,int gr)
{
 // FACE 
 setcolor(12);

 circle(gx,gy,gr);
 setfillstyle(1,12);
 floodfill(gx,gy,12);

 // NECK 
 setcolor(LIGHTRED);

 rectangle(gx-5,gy+10,gx+5,gy+17);
 setfillstyle(1,LIGHTRED);
 floodfill(gx-4,gy+16,LIGHTRED);

 //¸¸¸¸¸ TORSO ¸¸¸¸¸
 setcolor(BLUE);

 int torso[8]={gx-25,gy+17,gx+25,gy+17,gx+10,gy+80,gx-10,gy+80};
 setfillstyle(11,BLUE);
 fillpoly(4,torso);

 setcolor(RED);

 int shrtptrn[8]={gx-21,gy+33,gx+21,gy+33,gx+17,gy+48,gx-17,gy+48};
 setfillstyle(1,RED);
 fillpoly(4,shrtptrn);

 if(KEEPFLAG!=1)
 {
 // SLEEVES 
 setcolor(RED);

 int sl1[8]={gx-37,gy+24,gx-25,gy+17,gx-23,gy+30,gx-32,gy+34};
 setfillstyle(1,RED);
 fillpoly(4,sl1);

 int sl2[8]={gx+25,gy+17,gx+36,gy+24,gx+32,gy+34,gx+23,gy+30};
 setfillstyle(1,RED);
 fillpoly(4,sl2);

 // HANDS 
 setcolor(12);

 int lefthand[8]={gx-48,gy+29,gx-38,gy+24,gx-34,gy+33,gx-44,gy+36};
 setfillstyle(1,LIGHTRED);
 fillpoly(4,lefthand);

 int righthand[8]={gx+37,gy+25,gx+47,gy+28,gx+44,gy+36,gx+32,gy+33};
 setfillstyle(1,LIGHTRED);
 fillpoly(4,righthand);

 int leftarm[8]={gx-57,gy+29,gx-48,gy+29,gx-44,gy+36,gx-57,gy+36};
 setfillstyle(1,LIGHTRED);
 fillpoly(4,leftarm);

 int rightarm[8]={gx+47,gy+28,gx+56,gy+28,gx+56,gy+35,gx+44,gy+35};
 setfillstyle(1,LIGHTRED);
 fillpoly(4,rightarm);

 // GLOVES 
 setcolor(YELLOW);

 int lglove[10]={gx-57,gy+29,gx-57,gy+36,gx-61,gy+36,gx-68,gy+39,
		 gx-68,gy+29};
 setfillstyle(1,14);
 fillpoly(5,lglove);

 int rglove[10]={gx+56,gy+28,gx+67,gy+28,gx+67,gy+38,gx+63,gy+35,
		 gx+56,gy+35};
 setfillstyle(1,14);
 fillpoly(5,rglove);
 }

 else if(KEEPFLAG==1)
 {
  // SLEEVES 
 setcolor(RED);

 int sl1[8]={gx-34,gy+10,gx-25,gy+17,gx-23,gy+30,gx-30,gy+24};
 setfillstyle(1,RED);
 fillpoly(4,sl1);

 int sl2[8]={gx+27,gy+17,gx+35,gy+9,gx+30,gy+24,gx+24,gy+30};
 setfillstyle(1,RED);
 fillpoly(4,sl2);

 // HANDS 
 setcolor(12);

 int lefthand[8]={gx-38,gy+9,gx-35,gy+11,gx-32,gy+23,gx-48,gy+9};
 setfillstyle(1,LIGHTRED);
 fillpoly(4,lefthand);

 int righthand[8]={gx+35,gy+11,gx+38,gy+9,gx+48,gy+9,gx+32,gy+23};
 setfillstyle(1,LIGHTRED);
 fillpoly(4,righthand);

 int leftarm[8]={gx-30,gy-7,gx-27,gy-5,gx-38,gy+9,gx-48,gy+9};
 setfillstyle(1,LIGHTRED);
 fillpoly(4,leftarm);

 int rightarm[8]={gx+27,gy-5,gx+30,gy-7,gx+48,gy+9,gx+38,gy+9};
 setfillstyle(1,LIGHTRED);
 fillpoly(4,rightarm);

 // GLOVES 
 setcolor(YELLOW);

 int lglove[10]={gx-30,gy-7,gx-12,gy-25,gx-9,gy-15,gx-22,gy-9,
		 gx-27,gy-5};
 setfillstyle(1,14);
 fillpoly(5,lglove);

 int rglove[10]={gx+27,gy-5,gx+22,gy-9,gx+9,gy-15,gx+12,gy-25,
		 gx+30,gy-7};
 setfillstyle(1,14);
 fillpoly(5,rglove);

 }

 // SHORTS 
 setcolor(BLUE);

 int lshorts[8]={gx-10,gy+80,gx,gy+80,gx-5,gy+100,gx-25,gy+100};
 setfillstyle(10,BLUE);
 fillpoly(4,lshorts);

 int rshorts[8]={gx,gy+80,gx+10,gy+80,gx+25,gy+100,gx+5,gy+100};
 setfillstyle(10,BLUE);
 fillpoly(4,rshorts);

 setcolor(RED);

 int pline1[8]={gx-24,gy+97,gx-4,gy+97,gx-6,gy+100,gx-25,gy+100};
 setfillstyle(1,RED);
 fillpoly(4,pline1);

 int pline2[8]={gx+4,gy+97,gx+23,gy+97,gx+25,gy+100,gx+5,gy+100};
 setfillstyle(1,RED);
 fillpoly(4,pline2);

 // LEGS 
 setcolor(LIGHTRED);

 int leftleg[8]={gx-23,gy+101,gx-8,gy+101,gx-13,gy+150,gx-18,gy+150};
 setfillstyle(1,LIGHTRED);
 fillpoly(4,leftleg);

 int rightleg[8]={gx+7,gy+101,gx+22,gy+101,gx+17,gy+150,gx+12,gy+150};
 setfillstyle(1,LIGHTRED);
 fillpoly(4,rightleg);

 // STUDS 
 setcolor(4);

 int leftstud[12]={gx-18,gy+150,gx-13,gy+150,gx-10,gy+152,gx-14,gy+155,
		   gx-17,gy+155,gx-21,gy+152};
 setfillstyle(1,RED);
 fillpoly(6,leftstud);

 int rightstud[12]={gx+12,gy+150,gx+17,gy+150,gx+20,gy+152,gx+16,gy+155,
		    gx+13,gy+155,gx+9,gy+152};
 setfillstyle(1,RED);
 fillpoly(6,rightstud);

}



void CAR(float cax,float cay,float s)
{
  //REFERRENCE POINT
  //circle(cax,cay,0);
  setcolor(WHITE);
  //CHASSIS
  arc(cax-0.3*s,cay,45,158,1.2*s);  //ROOF
  if(s<=50)
  line(cax-0.3*s+1.2*s*cos(5.5),cay+1.2*s*sin(5.5)+0.01*s,cax+1.5*s,1.02*cay+s*sin(5.5)-0.1*s);   //BONNET
  else
  line(cax-0.3*s+1.2*s*cos(5.5),cay+1.2*s*sin(5.5)+0.01*s,cax+1.5*s,1.02*cay+s*sin(5.5)-0.05*s);   //BONNET
  arc(cax+1.25*s,cay-0.35*s,310,50,0.4*s);    //FRONT BUMPER
  line(cax+1.4*s,cay-(0.35*s)+(0.4*s)*sin(0.9),cax+1.5*s,cay-(0.35*s)+(0.4*s)*sin(0.9));   //BASE AHEAD OF TIRE
  arc(cax+s,cay-(0.35*s)+(0.4*s)*sin(0.9),0,180,0.4*s); //FRONT TIRE SKIRT
  circle(cax+s,cay-(0.35*s)+(0.4*s)*sin(0.9),0.35*s); //FRONT TIRE
//  getch();
  setfillstyle(1,WHITE);
  floodfill(cax+s,cay-(0.35*s)+(0.4*s)*sin(0.9),WHITE);
  line(cax-0.5*s,cay-(0.35*s)+(0.4*s)*sin(0.9),cax+0.6*s,cay-(0.35*s)+(0.4*s)*sin(0.9)); // BASE BETWEEN TIRES
  arc(cax-s,cay-(0.35*s)+(0.4*s)*sin(0.9)-0.1*s,350,140,0.5*s); //REAR TIRE SKIRT
  circle(cax-s,cay-(0.35*s)+(0.4*s)*sin(0.9)-0.1*s,0.45*s);  //REAR TIRE
  //getch();
  setfillstyle(1,WHITE);
//
  floodfill(cax-s,cay-(0.35*s)+(0.4*s)*sin(0.9)-0.1*s,WHITE);
//  getch();
  setfillstyle(1,BLUE);
//  floodfill(cax,cay-s/1.8,WHITE);

  //DOOR
  arc(cax-0.3*s,cay,45,135,1.1*s); //TOP CURVE
  arc(cax-s,cay-(0.35*s)+(0.4*s)*sin(0.9)-0.1*s,0,95,0.65*s); //BOTTOM LEFT CURVE
  line(cax-s+0.65*s,cay-(0.35*s)+(0.4*s)*sin(0.9)-0.1*s,cax-0.3*s+1.1*s*cos(5.5),cay-(0.35*s)+(0.4*s)*sin(0.9)-0.1*s);  // BOTTOM LINE
  line(cax-0.3*s+1.1*s*cos(5.5),cay-(0.35*s)+(0.4*s)*sin(0.9)-0.1*s,cax-0.3*s+1.1*s*cos(5.5),cay+1.1*s*sin(5.5));//RIGHT LINE
  arc(cax-0.3*s,cay,88,92,0.5*s);  //HANDLE
  line(cax-0.3*s+1.1*s*cos(3.926),cay+1.1*s*sin(3.926),cax-0.3*s+1.1*s*cos(5.497),cay+1.1*s*sin(5.497)); //MID LINE


   }

void STRMD()
{

 CAR(carx,cary,40);
 carx+=6;
// cary++;

//BUILDING1

rectangle(0,50,100,getmaxy()/2-21);
rectangle(20,60,40,80);floodfill(21,61,WHITE);
rectangle(60,60,80,80);
rectangle(20,90,40,110);
rectangle(60,90,80,110);
rectangle(20,120,40,140);
rectangle(60,120,80,140);floodfill(61,121,WHITE);
rectangle(20,150,40,170);
rectangle(60,150,80,170);
rectangle(20,180,40,200);
rectangle(60,180,80,200);
setfillstyle(1,BLUE);floodfill(2,53,WHITE);
int roof1[6]={0,50,50,25,100,50};
setfillstyle(1,WHITE);fillpoly(3,roof1);

//BUILDING2

rectangle(150,100,230,getmaxy()/2-21);
circle(195,150,25);
line(180,130,180,140);
line(180,140,190,140);
line(190,140,190,150);
line(190,150,200,150);
line(200,150,200,160);
line(200,160,210,160);
line(210,160,210,170);
setfillstyle(1,BROWN);
floodfill(195,160,WHITE);
rectangle(170,190,190,getmaxy()/2-21);
setfillstyle(1,YELLOW);
floodfill(171,191,WHITE);
setfillstyle(1,RED);
floodfill(151,101,WHITE);
int roof2[8]={150,100,160,70,220,70,230,100};
setfillstyle(1,WHITE);fillpoly(4,roof2);


 // getch();
 //ROAD
 setcolor(getmaxcolor());
 line(0,(getmaxy()/2)-20,3000,(getmaxy()/2)-20);
 line(0,(getmaxy()/2)+20,3000,(getmaxy()/2)+20);
 line(0,(getmaxy()/2)+21,3000,(getmaxy()/2)+21);
 line(0,(getmaxy()/2)+22,3000,(getmaxy()/2)+22);
// line(0,(getmaxy()/2)+23,3000,(getmaxy()/2)+23);
// line(0,(getmaxy()/2)+24,3000,(getmaxy()/2)+24);
 for(i=10;i<1000;i+=20)
 {
  line(i+1,(getmaxy()/2)-1,i+6,(getmaxy()/2)-1);
  line(i,(getmaxy()/2),i+7,(getmaxy()/2));
  line(i-1,(getmaxy()/2)+1,i+8,(getmaxy()/2)+1);

  }

setfillstyle(2,GREEN);
floodfill(getmaxx()/2,getmaxy()/2+100,WHITE);


}

void STORYPROG()
{
 cleardevice();
 for(int co=0;co<=25;co++)
 {
 cleardevice();
 STRMD();
 }
 int si=40;
 for(;si<=90;si+=10)
 {
 cleardevice();
 CAR(carx,cary,si);
 delay(100);
 }

 gy=cary-150;
 gx=carx;
 for(;gy<=250;gy+=5)
 {
   cleardevice();
   CAR(carx,cary,si);
   KEEPER(gx,gy,gr);
 setcolor(WHITE);

 circle(xst,yst,sst);
 line(xst,yst+sst,xst,yst+(5*sst));
 line(xst,yst+(2*sst),xst+(co/10*sst),yst+(4*sst));
 line(xst,yst+(2*sst),xst-(co/10*sst),yst+(4*sst));
 line(xst,yst+(5*sst),xst+(co/10*sst),yst+(7*sst));
 line(xst,yst+(5*sst),xst-(co/10*sst),yst+(7*sst));
 xst=400;
 yst=330;
/* circle(x,y,s);
 line(x,y+s,x,y+(5*s));
 line(x,y+(2*s),x+(co/10*s),y+(4*s));
 line(x,y+(2*s),x-(co/10*s),y+(4*s));
 line(x,y+(5*s),x+(co/10*s),y+(7*s));
 line(x,y+(5*s),x-(co/10*s),y+(7*s)); */
 circle(xst,yst,sst);
 line(xst,yst+sst,xst,yst+(5*sst));
 line(xst,yst+(2*sst),xst+(co/10*sst),yst+(4*sst));
 line(xst,yst+(2*sst),xst-(co/10*sst),yst+(4*sst));
 line(xst,yst+(5*sst),xst+(co/10*sst),yst+(7*sst));
 line(xst,yst+(5*sst),xst-(co/10*sst),yst+(7*sst));
 xst=500;
 yst=300;

/* circle(x,y,s);
 line(x,y+s,x,y+(5*s));
 line(x,y+(2*s),x+(co/10*s),y+(4*s));
 line(x,y+(2*s),x-(co/10*s),y+(4*s));
 line(x,y+(5*s),x+(co/10*s),y+(7*s));
 line(x,y+(5*s),x-(co/10*s),y+(7*s)); */
 circle(xst,yst,sst);
 line(xst,yst+sst,xst,yst+(5*sst));
 line(xst,yst+(2*sst),xst+(co/10*sst),yst+(4*sst));
 line(xst,yst+(2*sst),xst-(co/10*sst),yst+(4*sst));
 line(xst,yst+(5*sst),xst+(co/10*sst),yst+(7*sst));
 line(xst,yst+(5*sst),xst-(co/10*sst),yst+(7*sst));

 delay(50);
 }

cleardevice();

rectangle(10,10,600,100);
line(180,100,115,250);
line(190,100,115,250);
line(200,100,115,250);
line(210,100,115,250);
line(220,100,115,250);
KEEPER(100,270,gr);

xst=550;
yst=320;
sst=13;

/*circle(x,y,s);
line(x,y+s,x,y+(5*s));
line(x,y+(2*s),x+(co/10*s),y+(4*s));
line(x,y+(2*s),x-(co/10*s),y+(4*s));
line(x,y+(5*s),x+(co/10*s),y+(7*s));
line(x,y+(5*s),x-(co/10*s),y+(7*s));  */
circle(xst,yst,sst);
 line(xst,yst+sst,xst,yst+(5*sst));
 line(xst,yst+(2*sst),xst+(co/10*sst),yst+(4*sst));
 line(xst,yst+(2*sst),xst-(co/10*sst),yst+(4*sst));
 line(xst,yst+(5*sst),xst+(co/10*sst),yst+(7*sst));
 line(xst,yst+(5*sst),xst-(co/10*sst),yst+(7*sst));
settextstyle(1,0,3);
outtextxy(20,20,"HEY YOU!!!!");
outtextxy(20,40,"CLEAR THE GROUND.....WE ARE HERE TO PLAY");

delay(2500);

setcolor(BLACK);
line(180,100,115,250);
line(190,100,115,250);
line(200,100,115,250);
line(210,100,115,250);
line(220,100,115,250);

for(int cl=20;cl<=85;cl++)
line(11,cl,559,cl);
setcolor(RED);
outtextxy(20,20,"BUT.....");
//outtextxy(20,40,"WE CAME HERE FIRST");

setcolor(WHITE);
line(430,100,525,300);
line(420,100,525,300);
line(410,100,525,300);
line(400,100,525,300);
line(390,100,525,300);

delay(600);

setcolor(BLACK);
for(cl=20;cl<=85;cl++)
line(11,cl,559,cl);

setcolor(BLACK);
line(430,100,525,300);
line(420,100,525,300);
line(410,100,525,300);
line(400,100,525,300);
line(390,100,525,300);

setcolor(WHITE);
line(180,100,115,250);
line(190,100,115,250);
line(200,100,115,250);
line(210,100,115,250);
line(220,100,115,250);

setcolor(RED);
outtextxy(20,20,"WHATEVER!!!");
outtextxy(20,40,"JUST GET OUT OF HERE NOW");

delay(2000);

setcolor(BLACK);
for(cl=20;cl<=85;cl++)
line(11,cl,559,cl);

setcolor(WHITE);
line(430,100,525,300);
line(420,100,525,300);
line(410,100,525,300);
line(400,100,525,300);
line(390,100,525,300);

setcolor(BLACK);
line(180,100,115,250);
line(190,100,115,250);
line(200,100,115,250);
line(210,100,115,250);
line(220,100,115,250);

setcolor(RED);
outtextxy(20,20,"ONLY PROS PLAY HERE");
outtextxy(20,40,"NOT FOOLS LIKE YOU");

delay(3000);

setcolor(BLACK);
for(cl=20;cl<=85;cl++)
line(11,cl,559,cl);

setcolor(BLACK);
line(430,100,525,300);
line(420,100,525,300);
line(410,100,525,300);
line(400,100,525,300);
line(390,100,525,300);

setcolor(WHITE);
line(180,100,115,250);
line(190,100,115,250);
line(200,100,115,250);
line(210,100,115,250);
line(220,100,115,250);

setcolor(RED);
outtextxy(20,20,"HAHA!! GUYS GUYS");
outtextxy(20,40,"HE THINKS HE IS A PRO");
outtextxy(20,60,"SHOW US WHAT YOU'VE GOT");

delay(4000);

setcolor(BLACK);
for(cl=20;cl<=85;cl++)
line(11,cl,559,cl);

setcolor(WHITE);
line(430,100,525,300);
line(420,100,525,300);
line(410,100,525,300);
line(400,100,525,300);
line(390,100,525,300);

setcolor(BLACK);
line(180,100,115,250);
line(190,100,115,250);
line(200,100,115,250);
line(210,100,115,250);
line(220,100,115,250);

setcolor(RED);
outtextxy(20,20,"YOU WANT A MATCH ?");
outtextxy(20,40,"LETS INCREASE THE STAKES");
outtextxy(20,60,"WE WONT EVEN LET YOU TOUCH THE BALL!!!");

delay(4500);

setcolor(BLACK);
for(cl=20;cl<=85;cl++)
line(11,cl,559,cl);

setcolor(RED);
outtextxy(20,20,"WE'LL STRIKE A CHALLENGE....");
outtextxy(20,40,"IF YOU WIN...WE STEP ASIDE");
outtextxy(20,60,"BUT IF YOU LOSE.....");

delay(3500);

setcolor(BLACK);
for(cl=20;cl<=85;cl++)
line(11,cl,559,cl);

setcolor(RED);
outtextxy(20,40,"YOU NEVER SHOW YOUR FACE AGAIN");

delay(2000);

setcolor(BLACK);
for(cl=20;cl<=85;cl++)
line(11,cl,559,cl);

setcolor(BLACK);
line(430,100,525,300);
line(420,100,525,300);
line(410,100,525,300);
line(400,100,525,300);
line(390,100,525,300);

setcolor(WHITE);
line(180,100,115,250);
line(190,100,115,250);
line(200,100,115,250);
line(210,100,115,250);
line(220,100,115,250);

setcolor(RED);
outtextxy(20,30,"YOU'VE GOT A BIG MOUTH FOR YOUR AGE!!");
outtextxy(20,50,"OK THEN!! LETS DO IT");

}
/*
void main()
{
//GRAPHICS();
STORYPROG();
//CAR(getmaxx()/2,getmaxy()/2,30);
getch();
}
*/