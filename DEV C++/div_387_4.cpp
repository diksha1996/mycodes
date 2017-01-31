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
	int n,k,c=0,i,j=0,prev,last_seg;
	cin>>n>>k;
	int a[n],h[n],seg[n],ans;
	for(i=0;i<n;i++)
	h[i]=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<0)
		{
			h[i]=1;
			c++;
		}
	}
//	cout<<"c="<<c<<endl;
	if(c>k)
	cout<<"-1"<<endl;
	else
	{prev=-1;
		for(i=0;i<n;i++)
		{
			if(h[i]==1)
			{
				if(i>0&&prev!=-1&&prev!=(i-1))
				{
					seg[j]=i-prev-1;
					j++;
				}
				prev=i;
			}
		}
		if(prev!=(n-1))
		{
			last_seg = (n-1)-prev;
			//j++;
		}
		if(a[n-1]>=0)
		ans = (j+1)*2;
		else
		ans = 2*j + 1;
	//	cout<<"ans="<<ans<<endl;
		if(c==k)
		cout<<ans<<endl;
		else
		{
			sort(seg,seg+j);
			for(i=0;i<j;i++)
			{
				if((seg[i]+c)<=k)
				{
					ans-=2;
					c+=(seg[i]);
				}
				else
				break;
			}
			if((c+last_seg)<=k)
			ans-=1;
			cout<<ans<<endl;
		}	
	}
}
