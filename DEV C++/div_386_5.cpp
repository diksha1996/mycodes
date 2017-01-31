#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
map<int,int> mp;
int main()
{
	int n,m,flag=0,o=0,e=0,c=0,i,j,ans;
	cin>>n>>m;
	int a[n],temp[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		temp[i]=0;
		mp.insert(make_pair(a[i],0));
	}
	for(i=0;i<n;i++)
	{
		mp[a[i]]++;
		if(a[i]%2==0&&mp[a[i]]==1&&e<(n/2))
		e++;
		else if(mp[a[i]]==1&&o<(n/2)&&a[i]%2!=0)
		o++;
		else
		{
			temp[i]=1;
			c++;
		}
	}
//	cout<<e<<" "<<o<<" "<<c<<endl;
	ans=c;
	j=2;
	int k=1;
		for(i=0;i<n;i++)
		{
			if(temp[i]==1)
			{
				if(e!=(n/2))
				{
					 while(mp[j])
					  j+=2;
					  if(j<=m)
						{
							a[i]=j;
							mp[j]=1;
							e++;
							c--;
						}
					else
					{
						flag=1;
						break;
					}
				}
				else if(o!=(n/2))
				{
					while(mp[k])
					  k+=2;
					  if(k<=m)
						{
							a[i]=k;
							mp[k]=1;
							o++;
							c--;
						}
					else
					{
						flag=1;
						break;
					}
				}
			}
		}
		if(flag==1)
		cout<<"-1"<<endl;
		else
		{
			cout<<ans<<endl;
			for(i=0;i<n;i++)
			cout<<a[i]<<" ";
		}
	
}
