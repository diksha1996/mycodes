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
	int n,k,t,i,tmp,x,y,j,mx,l,z;
	cin>>n>>t>>k;
	int a[t];
	for(i=0;i<t;i++)
	{
		cin>>a[i];
	}
	tmp=a[t-1];
	for(i=t-2;i>=0;i--)
	{
		tmp+=max(0,a[i]-a[i+1]);
	}
	if(k>(n-t)||k<tmp)
	cout<<"-1"<<endl;
	else
	{	cout<<n<<endl;
		i=k-tmp;
		for(j=0;j<a[0];j++)
		cout<<"1 "<<(j+2)<<endl;
		x=a[0]+2;
		for(j=1;j<t;j++)
		{
			z=max(a[j-1]-a[j],0);
			mx=a[j-1]-z-1;
			if(i>0)
			{
				if(i>=mx)
				{
					for(l=x;l<a[j]+x;l++)
					cout<<x-1<<" "<<l<<endl;
					x += a[j];
					i-=mx;
				}	
				else
				{
					y=mx-i+1;
					for(l=x;l<a[j]+x;l++)
					{
					cout<<(x-y)<<" "<<l<<endl;
					y--;
					if(y==0)
					y=mx-i+1;
					}
					x+=a[j];
					i=0;	
				}
			}
			else
			{
				y=a[j-1];
				for(l=x;l<a[j]+x;l++)
				{
					cout<<(x-y)<<" "<<l<<endl;
					y--;
					if(y==0)
					y=a[j-1];
				}
				x+=a[j];
			}
		}
	}
}
