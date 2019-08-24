#include <graphics.h>
#include <iostream>
#include <math.h>
using namespace std;

void midptcircle(int r,int xC,int yC)
{
    int p;
    int x,y;
    p = (5/4) - r;
    x = 0;
    y = r;

    while (x<=y)
    {
        if (p<0)
        {
            p= p + 2 * x + 3;
            x++;
        }
        else
        {
            p= p + 2 * (x - y) + 5;
            x++;
            y--;
        }
    putpixel(xC,yC,YELLOW);
    putpixel(xC + x,yC + y,YELLOW);
    putpixel(xC + x,yC - y,YELLOW);
    putpixel(xC - x,yC + y,YELLOW);
    putpixel(xC - x,yC - y,YELLOW);
    putpixel(xC + y,yC + x,YELLOW);
    putpixel(xC - y,yC + x,YELLOW);
    putpixel(xC + y,yC - x,YELLOW);
    putpixel(xC - y,yC - x,YELLOW);

    delay(50);
    }

}


main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"c:\\tc\\bgi");

    int radius, xC, yC;
    cout<< endl << "Enter Center point coordinates:\n";
    cout<<endl<<"Xc: ";
    cin>>xC;
    cout<<endl<<"\nYc: ";
    cin>>yC;
    cout<<endl<<"\nRadius: ";
    cin>>radius;
    midptcircle(radius,xC,yC);
    getch();
    closegraph();
	return 0;
}

