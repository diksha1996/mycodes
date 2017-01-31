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
	ll n,k,a,b,i,j,l;
	cin>>n>>k>>a>>b;
	char ac,bc;
	string s[n];
	
	int x=max(a,b);
	int y=min(a,b);
	
	if(x==a)
	{
		ac='G';
		bc='B';
	}
	else
	{
		ac='B';
		bc='G';
		a=x;
		b=y;
	}
	//cout<<((b+1)*k)<<endl;
	if(a>((b+1)*k))
	cout<<"NO"<<endl;
	else
	{	while(a>0){
		for(i=0;i<b+1&&a>0;i++)
		{
			s[i] = s[i]+ac;
			a--;
		}
		}
		for(i=0;i<b+1;i++)
		{
			cout<<s[i];
			if(i<b)
			cout<<bc;
		}
	}

}
