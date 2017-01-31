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
	int n,r,b,ans,A,B,flag;
	char ch;
	cin>>n;
	int hsh[n];
	for(int i=0;i<n;i++)
	hsh[i]=0;
	map<int,char > m;
	vector <pair<int,int> > v;
	for(int i=0;i<n;i++)
	{
		cin>>ch>>r>>b;
		m[i] = ch;
		v.push_back(make_pair(r,b));
	}
	r=1;
	b=1;
	A=0;
	B=0;
	ans = n+1;
	int i ,x,y;
	while(1)
	{  flag=0;
	for(i=0;i<n;i++)
	{
		//cout<<"hash"<<i<<" "<<hsh[i]<<endl;
		if(hsh[i]==0)
		{
			x = max(v[i].first - A, 0);
		y = max(v[i].second - B, 0);
		if(x<=r&&y<=b)
		{
			flag=1;
			break;
		}
		flag=1;
		}	
	}
//	cout<<"flag="<<flag<<endl;
	if(flag==0)
	break;
	if(i==n)
	{
		ans++;
		r++;b++;
	}
	else	
	{
		hsh[i]=1;
		if(m[i]=='R')
		A++;
		else
		B++;
		r-=x;
		b-=y;		
	}		
	}
	cout<<ans<<endl;
}
