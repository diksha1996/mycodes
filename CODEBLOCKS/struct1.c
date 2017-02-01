#include<stdio.h>
void main()
{
struct
{
int x,y;
}  s[]={10,20,15,25,8,75,6,2};
int *i;
i=s;
printf("%d",s[i[7]].x);
}
