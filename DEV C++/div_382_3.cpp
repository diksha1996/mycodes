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
	ll n,i=2,ans=0,a,j=1,c;
	cin>>n;
	while(i<=n)
	{
		a=i;
		i = i+j;
		j=a;
		ans++;
	}
	cout<<ans<<endl;
}
