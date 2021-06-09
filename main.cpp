#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void draw_circle(int xc, int yc, int r)
	{
		int p,x,y;
		p=1-r;
		x=0;
		y=r;
		while(x<=y)
			{
				putpixel(xc+x,yc+y,15);
				putpixel(xc+x,yc-y,15);
				putpixel(xc-x,yc+y,15);
				putpixel(xc-x,yc-y,15);
				putpixel(xc+y,yc+x,15);
				putpixel(xc+y,yc-x,15);
				putpixel(xc-y,yc+x,15);
				putpixel(xc-y,yc-x,15);
				if(p>=0)
					{
						p=p+2*x-2*y+5;
						y--;
					}
				else
					{
						p=p+2*x+3;
					}
				x++;
			}
	}

int main()
	{
		int gd=DETECT,gm,xc,yc,r;
		initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
		printf("Enter x co-ordinate of center: ");
		scanf("%d",&xc);
		printf("Enter y co-ordinate of center: ");
		scanf("%d",&yc);
		printf("Enter radius of center: ");
		scanf("%d",&r);
		draw_circle(xc,yc,r);
		getch();
		closegraph();
	}
