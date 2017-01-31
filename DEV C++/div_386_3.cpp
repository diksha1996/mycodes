#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
int main()
{
	int s,x1,x2,t1,t2,p,d,a,b,w,ans=0;
	cin>>s>>x1>>x2>>t1>>t2>>p>>d;
	if(t2<=t1)
	{
		ans = abs(x1-x2)*t2;
	}
	else
	{
		a = abs(x1-x2)*t2;
		b = abs(x1-x2)*t1;
		if(d==1)
		{
			if(x1<x2)
			{
				if(p<=x1)
				w = (x1-p);
				else
				w = s-p+s+x1;
			}
			else
			{
				w = s-p+s-x1;
			}
		}
		else
		{
			if(x1>x2)
			{
				if(p>=x1)
				w = abs(x1-p);
				else
				w = s+p+s-x1;
			}
			else
			{
				w = p+x1;
			}
		}
		b+=(w*t1);
		ans=min(a,b);
	}
	cout<<ans<<endl;
}
