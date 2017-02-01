#include<stdio.h>
int det (int a[36],int d)
{if (d==1)
return a[0];
int i,j,k,t,b,val=0,p[36];
for (i=0;i<d;i++)
{b=i;
for(j=0;j<d*(d-1);j++)
    p[j]=a[d+j];
for(j=0;j<d*d;j++)
{if(j==b)
{b+=d-1;
for(k=j;k<d*d;k++)
    p[k]=p[k+1];
}
}
if(i%2==0)
    t=1;
else
    t=-1;
val=val+(t*a[i]*det(p,d-1);
}
return val;
}
void main()
{int a[36],i;
puts("enter matrix");
for (i=0;i<36;i++)
    scanf("%d",&a[i]);
printf("%d",det(a,b));
}
