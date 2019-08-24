#include <graphics.h>
#include <iostream>
#include <math.h>
using namespace std;

main( )
{
	float x,y,x1,y1,x2,y2,i=0,dx,dy,s,xi,yi;
	int gd=DETECT,gm;

	initgraph(&gd, &gm, "C:\\TC\\BGI");

	cout<<"Enter the value of x1 and y1 : ";
	cin>>x1>>y1;
	cout<<"Enter the value of x2 and y2: ";
	cin>>x2>>y2;

    x=x1;
    y=y1;
    dx=(x2-x1);
    dy=(y2-y1);
    if(abs(dx)>abs(dy))
    {
        s=abs(dx);
    }
    else
    {
        s=abs(dy);
    }
    xi=(dx)/s;
    yi=(dy)/s;
    while(x<x2||y<y2)
    {
        putpixel(x,y,RED);
        x=x+xi;
        y=y+yi;
        i=i+1;
        delay(30);
    }

 getch();
   closegraph();
	return 0;
}
