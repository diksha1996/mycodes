#include<stdio.h>
int fun(int);
int main()
{int n,s;
printf ("entr ANY No.");
scanf ("%d",&n);
s=fun(n);
printf("%d",s);
return 0;
}
int fun(int x)
{int d=x%10;
return (d+fun(x/10));
}
