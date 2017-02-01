#include<stdio.h>
int pow(int ,int);
void main()
{
int a, b, c;
printf("enter a no.");
scanf("%d %d",&a,&b);
c=pow(a,b);
printf ("%d",c);
}
int pow(int x, int y)
{if(y==0)
return 1;
else
    return x*pow(x,y-1);
}
