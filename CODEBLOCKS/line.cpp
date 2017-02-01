#include <graphics.h>
#include <stdio.h>
#include <math.h>

int main( )
{
    float x,y,x1,y1,x2,y2,dx,dy,pixel;
    int i,gd,gm;

    printf("Enter the value of x1 : ");
    scanf("%f",&x1);
    printf("Enter the value of y1 : ");
    scanf("%f",&y1);
    printf("Enter the value of x2 : ");
    scanf("%f",&x2);
    printf("Enter the value of y1 : ");
    scanf("%f",&y2);

    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");

    dx=(x2-x1);
    dy=(y2-y1);

    if(abs(dx)>=abs(dy))
    pixel=abs(dx);
    else
    pixel=abs(dy);

    printf("%f",pixel);
    x=x1;
    y=y1;

    i=1;
    while(i<=pixel)
    {
        x+=dx/pixel;
        y+=dy/pixel;
        putpixel(x,y,RED);
        i=i+1;
    }
    getch();
    closegraph();
}
