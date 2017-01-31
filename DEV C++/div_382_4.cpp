#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
int is_prime(ll x)
{
	int r=1;
	for (ll d=3; d*d<=x; d+=2)
		if (x%d==0) r=0;
	return r;
}
int main()
{
	ll n,a;
	cin>>n;
	if(n%2==0)
	{
		a = (n==2?1:2);
	}
	else
	{
		if(is_prime(n))
		a=1;
		else if(is_prime(n-2))
		a=2;
		else
		a=3;
	}
	cout<<a<<endl;
}
