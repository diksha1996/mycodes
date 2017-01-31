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
	ll n,q,sum,i,j;
	cin>>n>>q;
	ll wrk[n],c[n],t[q],k[q],d[q];
	for(i=0;i<n;i++)
	{
		wrk[i]=0;
		c[i]=0;
	}
	for(i=0;i<q;i++)
	{	sum=0;
	    cin>>t[i]>>k[i]>>d[i];
		for(j=0;j<n;j++)
		{
			if(wrk[j]<=t[i]&&k[i]>0)
			{
				sum+=(j+1);
				k[i]--;
				wrk[j]=t[i]+d[i];
			}
		}
		if(k[i]>0)
		{
			for(j=0;j<n;j++)
			wrk[j]=c[j];
			cout<<"-1"<<endl;
		}
		else
		{	cout<<sum<<endl;
			for(j=0;j<n;j++)
			c[j]=wrk[j];
		}
	
	}
}
