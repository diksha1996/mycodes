#include <Stdio.h>
void res(int,int,int,int*,int*);
int main()
{int a,b,c;
int per,avg;
	printf ("entr marks in each sub");
	scanf("%d %d %d",&a,&b,&c);
	res(a,b,c,&avg,&per);
	printf ("%d %d",avg ,per);
	return 0;
}
void res(int p,int q,int r,int *v,int*g)
{*v=(p+q+r)/3;
*g=*v;
} 
