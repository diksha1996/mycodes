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
	int a,b,c,ans=0;
	cin>>a>>b>>c;
	while(a>0)
	{
		if((2*a<=b)&&(4*a<=c))
		{
			ans = 7*a;
			break;
		}
		else
		a--;
	}
	cout<<ans<<endl;
}
