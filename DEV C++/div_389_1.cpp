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
	int n,m,k,d,r,t;
	char c;
	cin>>n>>m>>k;
	if(k%2==0)
	{
		c='R';
		t=k/2;
	}
	else
	{
		c='L';
		t=k/2+1;
	}
		if(t%m==0)
		{
			d=m;
			r=t/m;
		}
		else
		{
			if(t>m)
			d = t%m;
			else
			d = t;
			r = t/m + 1;
		}
	cout<<r<<" "<<d<<" "<<c<<endl;
}
