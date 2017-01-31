#include<stdio.h>
//using namespace std;
int a[1005][1005],c[1005][1005],r[1005][1005];
int main()
{
	long long n,m,i,j,ans=0;
	scanf("%lld %lld",&n,&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
			c[i][j] = c[i-1][j]+a[i][j];
			r[i][j] = r[i][j-1]+a[i][j];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(a[i][j]==0)
			{
				if(c[i-1][j])
				ans++;
				if(c[n][j]-c[i][j])
				ans++;
				if(r[i][j-1])
				ans++;
				if(r[i][m]-r[i][j])
				ans++;
			}
		}
	}
	printf("%lld",ans);
}
