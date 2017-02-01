#include<stdio.h>
void main()
{
int a[10],i,j,k,l,temp;
printf("enter array elements\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<9;j++)
{
for(k=j+1;k<10;k++)
{
if(a[k]<a[j])
{
temp=a[k];
a[k]=a[j];
a[j]=temp;
}
}
}
for(l=0;l<10;l++)
    printf("%d\n",a[l]);
}
