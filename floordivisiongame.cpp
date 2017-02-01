#include<iostream>
using namespace std;
 
int dp[6];
int main()
{	int t,n;
	cin>>t;
	dp[0]=0;
	dp[1]=1;
	dp[2]=dp[3]=2;
	dp[4]=dp[5]=3;
	while(t--)
	{
		cin>>n;
		long long a[n];
		int ans=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			while(a[i]>5)
					{
						a[i]/=12;
					}
			ans^=dp[a[i]];
		}
		if(ans==0)
		{
			cout<<"Derek"<<endl;
		}
		else
		{
			cout<<"Henry"<<endl;
		}
	}
}

