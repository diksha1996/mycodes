#include<stdio.h>
void main()
{
int i;
for(i=0;i<10;i++)
{
printf("%d",i);
if(i==3)
    continue;
if(i==6)
    break;
}
goto hom;
hom:
printf("result");
}
