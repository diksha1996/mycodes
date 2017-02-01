#include<stdio.h>
int sum (int );
void main()
{
int b,s;
printf ("enter no.");
scanf ("%d",&b);
s=sum (b);
printf("%d",s);
}
int sum (int x)
{
if (x>0)
return (x+sum (x-1));
else
return 0;
}
