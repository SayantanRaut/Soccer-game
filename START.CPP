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

double a=10,b=20,x=65,y=100,bx_s=200,by_s=300,lbs_s=20;
int coun=-4;
int lsr=14,lbr=100;
int filflg=0;

void LOADMAN()
{
 // circle(100,100,10);
 //FACE
 ellipse(x,y,0,360,2*a,2*b); //ellipse with a=10,b=13

 //HAIR
 line(x-8,y-40,x-8,y-38);
// line(x-7,y-41,x-7,y-38);
 line(x-6,y-41,x-6,y-39);
 line(x-4,y-42,x-4,y-40);
 line(x-2,y-43,x-2,y-41);
 line(x,y-44,x,y-40);
 line(x+8,y-40,x+8,y-38);
// line(x-7,y-41,x-7,y-38);
 line(x+6,y-41,x+6,y-39);
 line(x+4,y-42,x+4,y-40);
 line(x+2,y-43,x+2,y-41);
 line(x,y-44,x,y-40);

// line(x+16,y-25,x+10,y-25);
//EYE
 ellipse(x+10,y-25,0,360,6,3);
 circle(x+10,y-25,1);

 //NOSE
 line(x+20,y-8,x+24,y);
 line(x+20,y,x+24,y);

 //MOUTH
 ellipse(x+15,y+25,180,270,5,4);
 ellipse(x+15,y+25,180,270,5,3);
 ellipse(x+15,y+25,180,270,5,2);
 ellipse(x+15,y+25,180,270,5,1);

 //EAR
 ellipse(x,y-5,45,270,2,4);
 ellipse(x,y-5,200,315,2,10);

// circle(x,y+55,14);
// arc(x,y+55,180,360,80);

//LEFT ARM SWITCH
switch(coun)
{
 case -4:
 int polyla_4[8]={x+14*cos(3.54),y+55+14*sin(3.54),x+14*cos(0.4),y+55+14*sin(0.4),
		 x+80*cos(1.79),y+55+80*sin(1.79),x+80*cos(2.14),y+55+80*sin(2.14)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyla_4);
 break;

 case -3:
 int polyla_3[8]={x+14*cos(3.44),y+55+14*sin(3.44),x+14*cos(0.3),y+55+14*sin(0.3),
		 x+80*cos(1.69),y+55+80*sin(1.69),x+80*cos(2.04),y+55+80*sin(2.04)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyla_3);
 break;

 case -2:
 int polyla_2[8]={x+14*cos(3.34),y+55+14*sin(3.34),x+14*cos(0.2),y+55+14*sin(0.2),
		 x+80*cos(1.59),y+55+80*sin(1.59),x+80*cos(1.94),y+55+80*sin(1.94)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyla_2);
 break;

 case -1:
 int polyla_1[8]={x+14*cos(3.24),y+55+14*sin(3.24),x+14*cos(0.1),y+55+14*sin(0.1),
		 x+80*cos(1.49),y+55+80*sin(1.49),x+80*cos(1.84),y+55+80*sin(1.84)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyla_1);
 break;

 case 0:
 int polyla0[8]={x+14*cos(3.14),y+55+14*sin(3.14),x+14*cos(0),y+55+14*sin(0),
		 x+80*cos(1.39),y+55+80*sin(1.39),x+80*cos(1.74),y+55+80*sin(1.74)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyla0);
 break;

 case 1:
 int polyla1[8]={x+14*cos(3.04),y+55+14*sin(3.04),x+14*cos(6.183),y+55+14*sin(6.183),
		 x+80*cos(1.29),y+55+80*sin(1.29),x+80*cos(1.64),y+55+80*sin(1.64)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyla1);
 break;

 case 2:
 int polyla2[8]={x+14*cos(2.94),y+55+14*sin(2.94),x+14*cos(6.083),y+55+14*sin(6.083),
		 x+80*cos(1.19),y+55+80*sin(1.19),x+80*cos(1.54),y+55+80*sin(1.54)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyla2);
 break;

 case 3:
 int polyla3[8]={x+14*cos(2.84),y+55+14*sin(2.84),x+14*cos(5.983),y+55+14*sin(5.983),
		 x+80*cos(1.09),y+55+80*sin(1.09),x+80*cos(1.44),y+55+80*sin(1.44)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyla3);
 break;

 case 4:
 int polyla4[8]={x+14*cos(2.74),y+55+14*sin(2.74),x+14*cos(5.883),y+55+14*sin(5.883),
		 x+80*cos(0.99),y+55+80*sin(0.99),x+80*cos(1.34),y+55+80*sin(1.34)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyla4);
 break;

 default:
 int polyla5[8]={x+14*cos(2.74),y+55+14*sin(2.74),x+14*cos(5.883),y+55+14*sin(5.883),
		 x+80*cos(0.99),y+55+80*sin(0.99),x+80*cos(1.34),y+55+80*sin(1.34)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyla5);
 break;

 }


/* //LEFT ARM
 int polyla[8]={x+10,y+60,x-10,y+45,x-50,y+105,x-30,y+120};
 setfillstyle(1,BLACK);
 fillpoly(4,polyla);    */

/* //LEFT LEG
 int polyll[8]={x+7.5,y+150,x-7.5,y+130,x-57.5,y+210,x-42.5,y+230};
 setfillstyle(1,BLACK);
 fillpoly(4,polyll);*/

// circle(x,y+155,lsr);
// arc(x,y+155,180,360,lbr);

//LEFT LEG SWITCH

switch(coun)
{
 case 4:
 int polyll4[8]={x+lsr*cos(3.74),y+155+lsr*sin(3.74),x+lsr*cos(0.6),y+155+lsr*sin(0.6),
		 x+lbr*cos(1.79),y+155+lbr*sin(1.79),x+lbr*cos(2.14),y+155+lbr*sin(2.14)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyll4);
 break;

 case 3:
 int polyll3[8]={x+lsr*cos(3.59),y+155+lsr*sin(3.59),x+lsr*cos(0.45),y+155+lsr*sin(0.45),
		 x+lbr*cos(1.69),y+155+lbr*sin(1.69),x+lbr*cos(2.04),y+155+lbr*sin(2.04)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyll3);
 break;

 case 2:
 int polyll2[8]={x+lsr*cos(3.44),y+155+lsr*sin(3.44),x+lsr*cos(0.3),y+155+lsr*sin(0.3),
		 x+lbr*cos(1.59),y+155+lbr*sin(1.59),x+lbr*cos(1.94),y+155+lbr*sin(1.94)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyll2);
 break;

 case 1:
 int polyll1[8]={x+lsr*cos(3.29),y+155+lsr*sin(3.29),x+lsr*cos(0.15),y+155+lsr*sin(0.15),
		 x+lbr*cos(1.49),y+155+lbr*sin(1.49),x+lbr*cos(1.84),y+155+lbr*sin(1.84)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyll1);
 break;

 case 0:
 int polyll0[8]={x+lsr*cos(3.14),y+155+lsr*sin(3.14),x+lsr*cos(0),y+155+lsr*sin(0),
		 x+lbr*cos(1.39),y+155+lbr*sin(1.39),x+lbr*cos(1.74),y+155+lbr*sin(1.74)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyll0);
 break;

 case -1:
 int polyll_1[8]={x+lsr*cos(2.99),y+155+lsr*sin(2.99),x+lsr*cos(6.133),y+155+lsr*sin(6.133),
		 x+lbr*cos(1.29),y+155+lbr*sin(1.29),x+lbr*cos(1.64),y+155+lbr*sin(1.64)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyll_1);
 break;

 case -2:
 int polyll_2[8]={x+lsr*cos(2.84),y+155+lsr*sin(2.84),x+lsr*cos(5.983),y+155+lsr*sin(5.983),
		 x+lbr*cos(1.19),y+155+lbr*sin(1.19),x+lbr*cos(1.54),y+155+lbr*sin(1.54)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyll_2);
 break;

 case -3:
 int polyll_3[8]={x+lsr*cos(2.69),y+155+lsr*sin(2.69),x+lsr*cos(5.833),y+155+lsr*sin(5.833),
		 x+lbr*cos(1.09),y+155+lbr*sin(1.09),x+lbr*cos(1.44),y+155+lbr*sin(1.44)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyll_3);
 break;

 case -4:
 int polyll_4[8]={x+lsr*cos(2.54),y+155+lsr*sin(2.54),x+lsr*cos(5.683),y+155+lsr*sin(5.683),
		 x+lbr*cos(0.99),y+155+lbr*sin(0.99),x+lbr*cos(1.34),y+155+lbr*sin(1.34)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyll_4);
 break;

 default:
 int polyll5[8]={x+lsr*cos(3.74),y+155+lsr*sin(3.74),x+lsr*cos(0.6),y+155+lsr*sin(0.6),
		 x+lbr*cos(1.79),y+155+lbr*sin(1.79),x+lbr*cos(2.14),y+155+lbr*sin(2.14)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyll5);

 }
 //BODY
 int polybd[8]={x-30,y+50,x+30,y+50,x+30,y+150,x-30,y+150};
 setfillstyle(1,BLACK);
 fillpoly(4,polybd);

/* //RIGHT ARM
 int polyra[8]={x-10,y+60,x+10,y+45,x+50,y+105,x+30,y+120};
 setfillstyle(1,BLACK);
 fillpoly(4,polyra);   */

//RIGHT ARM SWITCH

 switch(coun)
{
 case 4:
 int polyra4[8]={x+14*cos(3.54),y+55+14*sin(3.54),x+14*cos(0.4),y+55+14*sin(0.4),
		 x+80*cos(1.79),y+55+80*sin(1.79),x+80*cos(2.14),y+55+80*sin(2.14)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyra4);
 break;

 case 3:
 int polyra3[8]={x+14*cos(3.44),y+55+14*sin(3.44),x+14*cos(0.3),y+55+14*sin(0.3),
		 x+80*cos(1.69),y+55+80*sin(1.69),x+80*cos(2.04),y+55+80*sin(2.04)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyra3);
 break;

 case 2:
 int polyra2[8]={x+14*cos(3.34),y+55+14*sin(3.34),x+14*cos(0.2),y+55+14*sin(0.2),
		 x+80*cos(1.59),y+55+80*sin(1.59),x+80*cos(1.94),y+55+80*sin(1.94)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyra2);
 break;

 case 1:
 int polyra1[8]={x+14*cos(3.24),y+55+14*sin(3.24),x+14*cos(0.1),y+55+14*sin(0.1),
		 x+80*cos(1.49),y+55+80*sin(1.49),x+80*cos(1.84),y+55+80*sin(1.84)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyra1);
 break;

 case 0:
 int polyra0[8]={x+14*cos(3.14),y+55+14*sin(3.14),x+14*cos(0),y+55+14*sin(0),
		 x+80*cos(1.39),y+55+80*sin(1.39),x+80*cos(1.74),y+55+80*sin(1.74)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyra0);
 break;

 case -1:
 int polyra_1[8]={x+14*cos(3.04),y+55+14*sin(3.04),x+14*cos(6.183),y+55+14*sin(6.183),
		 x+80*cos(1.29),y+55+80*sin(1.29),x+80*cos(1.64),y+55+80*sin(1.64)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyra_1);
 break;

 case -2:
 int polyra_2[8]={x+14*cos(2.94),y+55+14*sin(2.94),x+14*cos(6.083),y+55+14*sin(6.083),
		 x+80*cos(1.19),y+55+80*sin(1.19),x+80*cos(1.54),y+55+80*sin(1.54)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyra_2);
 break;

 case -3:
 int polyra_3[8]={x+14*cos(2.84),y+55+14*sin(2.84),x+14*cos(5.983),y+55+14*sin(5.983),
		 x+80*cos(1.09),y+55+80*sin(1.09),x+80*cos(1.44),y+55+80*sin(1.44)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyra_3);
 break;

 case -4:
 int polyra_4[8]={x+14*cos(2.74),y+55+14*sin(2.74),x+14*cos(5.883),y+55+14*sin(5.883),
		 x+80*cos(0.99),y+55+80*sin(0.99),x+80*cos(1.34),y+55+80*sin(1.34)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyra_4);
 break;

 default:
 int polyra5[8]={x+14*cos(3.54),y+55+14*sin(3.54),x+14*cos(0.4),y+55+14*sin(0.4),
		 x+80*cos(1.79),y+55+80*sin(1.79),x+80*cos(2.14),y+55+80*sin(2.14)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyra5);
 break;
 }

//RIGHT LEG SWITCH

switch(coun)
{
 case -4:
 int polyrl_4[8]={x+lsr*cos(3.74),y+155+lsr*sin(3.74),x+lsr*cos(0.6),y+155+lsr*sin(0.6),
		 x+lbr*cos(1.79),y+155+lbr*sin(1.79),x+lbr*cos(2.14),y+155+lbr*sin(2.14)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyrl_4);
 break;

 case -3:
 int polyrl_3[8]={x+lsr*cos(3.59),y+155+lsr*sin(3.59),x+lsr*cos(0.45),y+155+lsr*sin(0.45),
		 x+lbr*cos(1.69),y+155+lbr*sin(1.69),x+lbr*cos(2.04),y+155+lbr*sin(2.04)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyrl_3);
 break;

 case -2:
 int polyrl_2[8]={x+lsr*cos(3.44),y+155+lsr*sin(3.44),x+lsr*cos(0.3),y+155+lsr*sin(0.3),
		 x+lbr*cos(1.59),y+155+lbr*sin(1.59),x+lbr*cos(1.94),y+155+lbr*sin(1.94)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyrl_2);
 break;

 case -1:
 int polyrl_1[8]={x+lsr*cos(3.29),y+155+lsr*sin(3.29),x+lsr*cos(0.15),y+155+lsr*sin(0.15),
		 x+lbr*cos(1.49),y+155+lbr*sin(1.49),x+lbr*cos(1.84),y+155+lbr*sin(1.84)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyrl_1);
 break;

 case 0:
 int polyrl0[8]={x+lsr*cos(3.14),y+155+lsr*sin(3.14),x+lsr*cos(0),y+155+lsr*sin(0),
		 x+lbr*cos(1.39),y+155+lbr*sin(1.39),x+lbr*cos(1.74),y+155+lbr*sin(1.74)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyrl0);
 break;

 case 1:
 int polyrl1[8]={x+lsr*cos(2.99),y+155+lsr*sin(2.99),x+lsr*cos(6.133),y+155+lsr*sin(6.133),
		 x+lbr*cos(1.29),y+155+lbr*sin(1.29),x+lbr*cos(1.64),y+155+lbr*sin(1.64)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyrl1);
 break;

 case 2:
 int polyrl2[8]={x+lsr*cos(2.84),y+155+lsr*sin(2.84),x+lsr*cos(5.983),y+155+lsr*sin(5.983),
		 x+lbr*cos(1.19),y+155+lbr*sin(1.19),x+lbr*cos(1.54),y+155+lbr*sin(1.54)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyrl2);
 break;

 case 3:
 int polyrl3[8]={x+lsr*cos(2.69),y+155+lsr*sin(2.69),x+lsr*cos(5.833),y+155+lsr*sin(5.833),
		 x+lbr*cos(1.09),y+155+lbr*sin(1.09),x+lbr*cos(1.44),y+155+lbr*sin(1.44)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyrl3);
 break;

 case 4:
 int polyrl4[8]={x+lsr*cos(2.54),y+155+lsr*sin(2.54),x+lsr*cos(5.683),y+155+lsr*sin(5.683),
		 x+lbr*cos(0.99),y+155+lbr*sin(0.99),x+lbr*cos(1.34),y+155+lbr*sin(1.34)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyrl4);
 break;

 default:
 int polyrl5[8]={x+lsr*cos(2.54),y+155+lsr*sin(2.54),x+lsr*cos(5.683),y+155+lsr*sin(5.683),
		 x+lbr*cos(0.99),y+155+lbr*sin(0.99),x+lbr*cos(1.34),y+155+lbr*sin(1.34)};
 setfillstyle(1,BLACK);
 fillpoly(4,polyrl5);
 break;
 }


/* //RIGHT LEG
 int polyrl[8]={x-7.5,y+150,x+7.5,y+130,x+57.5,y+210,x+42.5,y+230};
 setfillstyle(1,BLACK);
 fillpoly(4,polyrl);*/
}

void LOADBALL(char A[10])
{
 if(strcmp(A,"WHITE")==0)
 {
 setcolor(WHITE);
 setfillstyle(1,WHITE);
 }
 else
 {
 setcolor(BLACK);
 setfillstyle(1,BLACK);
 }

 //BALL
 circle(bx_s,by_s,lbs_s);  //lbs=20

 //PATERN IN BALL
 int polyhex1[8]={bx_s-0.9*lbs_s,by_s+0.4*lbs_s,bx_s-0.5*lbs_s,by_s+0.2*lbs_s,bx_s-0.5*lbs_s,by_s-0.2*lbs_s,bx_s-0.9*lbs_s,by_s-0.4*lbs_s};
 drawpoly(4,polyhex1);

 int polyhex2[8]={bx_s-0.9*lbs_s,by_s-0.4*lbs_s,bx_s-0.5*lbs_s,by_s-0.2*lbs_s,bx_s,by_s-0.5*lbs_s,bx_s,by_s-lbs_s};
 drawpoly(4,polyhex2);

 int polyhex3[8]={bx_s,by_s-lbs_s,bx_s,by_s-0.5*lbs_s,bx_s+0.5*lbs_s,by_s-0.2*lbs_s,bx_s+0.9*lbs_s,by_s-0.4*lbs_s};
 drawpoly(4,polyhex3);

 int polyhex4[8]={bx_s+0.9*lbs_s,by_s+0.4*lbs_s,bx_s+0.5*lbs_s,by_s+0.2*lbs_s,bx_s+0.5*lbs_s,by_s-0.2*lbs_s,bx_s+0.9*lbs_s,by_s-0.4*lbs_s};
 drawpoly(4,polyhex4);

 int polyhex5[8]={bx_s,by_s+lbs_s,bx_s,by_s+0.5*lbs_s,bx_s+0.5*lbs_s,by_s+0.2*lbs_s,bx_s+0.9*lbs_s,by_s+0.4*lbs_s};
 drawpoly(4,polyhex5);

 int polyhex6[8]={bx_s-0.9*lbs_s,by_s+0.4*lbs_s,bx_s-0.5*lbs_s,by_s+0.2*lbs_s,bx_s,by_s+0.5*lbs_s,bx_s,by_s+lbs_s};
 drawpoly(4,polyhex6);


 if(filflg==0)
 {
  floodfill(bx_s-0.9*lbs_s,by_s,WHITE);
  floodfill(bx_s+1,by_s-0.5*lbs_s,WHITE);
  floodfill(bx_s+1,by_s+0.5*lbs_s,WHITE);
  filflg=21898;
 }

 else
 {
  floodfill(bx_s+0.9*lbs_s,by_s,WHITE);
  floodfill(bx_s-1,by_s-0.5*lbs_s,WHITE);
  floodfill(bx_s-1,by_s+0.5*lbs_s,WHITE);
  filflg=0;
 }

	}

void LBALLMVMNT()
{
 while(bx_s<=285)
 { cleardevice();
   LOADMAN();
   LOADBALL("WHITE");
   delay(50);
   bx_s+=6;
   by_s+=0.7;
   lbs_s+=0.3;
 }

 while(bx_s<=370)
 { cleardevice();
   LOADMAN();
   LOADBALL("WHITE");
   delay(50);
   bx_s+=6;
   by_s-=0.3;
   lbs_s-=0.3;
 }
/*       WIGGLE WIGGLE
 while(by>100)
 {
  cleardevice();
  LOADMAN();
  LOADBALL("WHITE");
  int traj=(bx-319)*(bx-319)+(by-239)*(by-239);
  by-=3;
  if((traj-(by-239)*(by-239))<0)
  bx=319-sqrt(abs(traj-(by-239)*(by-239)));
  if((traj-(by-239)*(by-239))>0)
  bx=319+sqrt(abs(traj-(by-239)*(by-239)));
  delay(50);

 }               */

  while(bx_s>=319)
 {
  cleardevice();
  LOADMAN();
  LOADBALL("WHITE");
  int traj=(bx_s-319)*(bx_s-319)+(by_s-239)*(by_s-239);
  by_s-=6;
  if((traj-(by_s-239)*(by_s-239))<0)
  bx_s=319-sqrt(abs(traj-(by_s-239)*(by_s-239)));
  if((traj-(by_s-239)*(by_s-239))>0)
  bx_s=319+sqrt(abs(traj-(by_s-239)*(by_s-239)));
  delay(50);
  lbs_s-=0.1;
	     }

  LOADMAN();

  for(int i=0;i<=20;i++)
  {
  LOADBALL("WHITE");
  int traj=(bx_s-319)*(bx_s-319)+(by_s-239)*(by_s-239);
  by_s+=3;
  if((traj-(by_s-239)*(by_s-239))<0)
  bx_s=319+sqrt(abs(traj-(by_s-239)*(by_s-239)));
  if((traj-(by_s-239)*(by_s-239))>0)
  bx_s=319-sqrt(abs(traj-(by_s-239)*(by_s-239)));
  delay(30);
  lbs_s+=20;
  setcolor(BLACK);
 if(lbs_s<bx_s-(x+30))
 {
   for(int li=0;li<=4000;li++)
   {
    line(x+50,li,x+4000,li);
   }
 }
 else
 {
   for(int li=0;li<=4000;li++)
   {
    line(0,li,x+4000,li);
   }
 }


  /* setcolor(BLACK);
  setfillstyle(1,BLACK);
  rectangle(x+30,y,x+3000,y+3000);
  floodfill(bx,by,BLACK);
  */
  }



/* while(bx<=319)
 {
  cleardevice();
  LOADMAN();
  LOADBALL("WHITE");
  int traj=(bx-319)*(bx-319)+(by-239)*(by-239);
  by+=3;
  if((traj-(by-239)*(by-239))<0)
  bx=319-sqrt(abs(traj-(by-239)*(by-239)));
  if((traj-(by-239)*(by-239))>0)
  bx=319+sqrt(abs(traj-(by-239)*(by-239)));
  delay(50);
}*/

}

/*
void main()
{
 GRAPHICS();
 for(int i=0;i<=8;i++)
 {
 cleardevice();
 LOADMAN();
 LOADBALL("WHITE");
 coun++;
 delay(50);
 x+=5;
 if(x>=bx_s) break;
 }

 for(i=0;i<=9;i++)
 {
 cleardevice();
 LOADMAN();
 LOADBALL("WHITE");
 coun--;
 delay(100);
 x+=5;
 if(x>=bx_s-50) break;
 }
 LBALLMVMNT();
 getch();
 }
 */