#include<stdio.h>
void main()
{int i;
int a[10]={4,6,8,9,7,5,5};
int *p[]={a,a+1,a+2,a+3,a+4};
int **ptr =p;
printf ("%d %d %d",ptr,*ptr,**ptr);
}
