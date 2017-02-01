#include<stdio.h>
#include<conio.h>
#define AM(a,b) ((a+b)/2)
#define case(x) (x+32)
#define big(a,b) int large;\if(a>b)\large=a;\else\large=b;\
void main()
{
 int x,y,c;
 scanf("%d%d",&x,&y);
 c=AM(x,y);
 printf("%d\n",c);
 char m;
 scanf("%c",&m);
 m=case(m);
 printf("%c\n",m);
 int g,h,k;
 scanf("%d%d",&g,&h);
 k=large(g,h);
 printf("%d",k);
 getch();
}

