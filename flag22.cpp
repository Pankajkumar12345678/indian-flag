#include<stdio.h>
#include<graphics.h>
#include<dos.h>
main()
{
		int stang,endang,i;
		int x;
		int y;
	int gd=DETECT,gm;

	initgraph(&gd,&gm,"");
	stang=0;
	endang=8;
x=0;
x=x+5;
setcolor(LIGHTRED);
rectangle(50,50,370,150);
setfillstyle(SOLID_FILL,LIGHTRED);
floodfill(51,51,LIGHTRED);
setcolor(WHITE);
rectangle(50,150,370,250);
setfillstyle(SOLID_FILL,WHITE);
    floodfill(51,151,WHITE);
   setcolor(GREEN); 
rectangle(50,250,370,350);
setfillstyle(SOLID_FILL,GREEN);
floodfill(51,251,GREEN);
line(50,50,50,500);
line(40,50,40,500);
line(40,50,50,50);
outtextxy(200,20,"I LOVE MY INDIA");
outtextxy(70,20,"PANKAJ PROJECT");
	for(i=0;i<22.5;i++)
	{
		pieslice(200+x,200,stang+stang,endang+stang,50);
		stang=stang+8;
		endang=endang+8;
		delay(100);
		
	}
  // }
	getch();
	closegraph();
	
}
