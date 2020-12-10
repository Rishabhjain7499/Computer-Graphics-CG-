#include<stdio.h>
#include<conio.h>
#include<graphics.h>
Inttlx,tly,brx,bry,px,py;
Void point_clip()
{
Intwxmin,wymin,wxmax,wymax;
Wxmin=tlx;
Wxmax=brx;
Wymin=tly;
Wymax=bry;
If(px>=wxmin&&px<=wxmax)
If(py>=wymin&&py<=wymax)
Putpixel(px,py,RED);
Getch();
Closegraph();
}
Void main()
{
Intgd=DETECT,gm,xc,yc,r;
Clrscr();
Printf(“Enter the top left coordinate”);
Scanf(“%d%d”,&tlx,&tly);
Printf(“Enter the bottom right coordinate”);
Scanf(“%d%d”,&brx,&bry);
Printf(“\n Enter the point”);
Scanf(“%d%d”,&px,&py);
Initgraph(&gd,&gm,”c:\\tc\\bgi”);
Setbkcolor(BLUE); 
Setcolor(RED);
Rectangle(tlx,tly,brx,bry);
Point_clip();
} 
