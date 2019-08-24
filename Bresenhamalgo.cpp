#include<graphics.h>
#include <math.h>
#include <dos.h>
#include<iostream>
using namespace std;
int main()
{
    float x,y,x1,y1,x2,y2,p,dx,dy,m,xi,yi;
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
    m=(dy/dx);
    p=(2*dy-dx);
    while(x<x2||y<y2)
    {
        if(m<=1)
        {
             if(p<0)
            {
            putpixel(x,y,RED);
            xi=dx/abs(dx);
            x=x+xi;
            p=(p+2*dy);
            }
            else
            {
            putpixel(x,y,RED);
            xi=dx/abs(dx);
            yi=dy/abs(dy);
            x=x+xi;
            y=y+yi;
            p=(p+2*dy-2*dx);
            }
        }
        else
        {
             if(p<0)
            {
            putpixel(x,y,RED);
            yi=dy/abs(dy);
            y=y+yi;
            p=(p+2*dx);
            }
            else
            {
            putpixel(x,y,RED);
             xi=dx/abs(dx);
            yi=dy/abs(dy);
            x=x+xi;
            y=y+yi;
            p=(p+2*dx-2*dy);
            }
        }
        delay(30);
    }
    getch();
    closegraph();
    return(0);
}

