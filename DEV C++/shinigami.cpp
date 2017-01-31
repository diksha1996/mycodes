#include<iostream>
#define mod 1000000007
#define ll long long
using namespace std;
long long power(int x,int y)
{
    long long res = 1; 
    x = x % mod;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % mod;
        y = y>>1; 
        x = (x*x) % mod;  
    }
    return res;
}
ll dp[10001][11];
long long fun(int n,int k)
{
	if(k==1) 
	return 1;
	if(dp[n][k])
	return dp[n][k];
	ll ans=0;
	if(n<k)
	ans=power(2,n);
	else
	{   
		for(int i=1;i<=k;i++){
			ans+=fun(n-i,k);
		}
		dp[n][k]=ans%mod;
		return dp[n][k];
	}
}
int main(){
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<fun(n-1,k)<<endl;
	}
}

