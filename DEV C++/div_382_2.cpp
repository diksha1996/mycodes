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
int n,n1,n2,i,x,y;
	double sum1=0,sum2=0,ans;
	cin>>n>>n1>>n2;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	x=min(n1,n2);
	y=max(n1,n2);
	i=n-1;
	while(x--)
	{
		sum1+=a[i];
		i--;
	}
	while(y--)
	{
		sum2+=a[i];
		i--;
	}
	ans = (sum1/min(n1,n2)) + (sum2/max(n1,n2));
	cout<<fixed<<setprecision(8)<<ans<<endl;
}
