#include<iostream>
#include<conio.h>
#include<math.h>
#include<graphics.h>
using namespace std;
void display(int xs1,int ys1,int x,int y);
void ellips1(int xs1,int ys1,int rx, int ry)
{
	int x,y;
	float p0,p1,dx,dy;
	x=0;
	y=ry;
	p0=pow(ry,2)-(pow(rx,2)*ry)+(0.25*pow(rx,2));
	dx=2*pow(ry,2)* x;
	dy=2*pow(rx,2)* y;
	do
	{
		display(xs1,ys1,x,y);
		if(p0<0)
		{
			x++;
			dx=dx+(2*(pow(ry,2)));
			p0=p0+dx+(pow(ry,2));
		}
		else
		{
			x++;
			y--;
			dx=dx+(2*(pow(ry,2)));
			dy=dy-(2*(pow(rx,2)));
			p0=p0+dx-dy+(pow(ry,2));
		}
	}while(dx<dy);
	do
	{
		display(xs1,ys1,x,y);
		if(p1>0)
		{
			x=x;
			y=y-1;
			dy=dy-(2*(pow(rx,2)));
			p1=p1-dy+pow(rx,2);
		}
		else
		{
			x=x+1;
			y=y-1;
			dy=dy-(2*(pow(rx,2)));
			dx=dx+(2*(pow(ry,2)));
			p1=p1+dx-dy+pow(rx,2);
		}
	}while(y>0);
}
void display(int xs,int ys,int x,int y)
{
	putpixel(xs+x,ys+y,WHITE);
	putpixel(xs-x,ys-y,RED);
	putpixel(xs+x,ys-y,GREEN);
	putpixel(xs-x,ys+y,YELLOW);
}
int main()
{
	int xs1,ys1;
	float rx1,ry1;
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
    cout<< endl << "Enter Center point coordinates:\n";
    cout<<endl<<"Xc: ";
    cin>>xs1;
    cout<<endl<<"\nYc: ";
    cin>>ys1;
    cout<<endl<<"\nRadius of X Axis: ";
    cin>>rx1;
    cout<<endl<<"\nRadius of Y Axis: ";
    cin>>ry1;
	ellips1(xs1,ys1,rx1,ry1);
	getch();
	closegraph();
    return 0;
}

