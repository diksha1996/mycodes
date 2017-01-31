#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define f first 
#define s second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;

int main(){
	ll n,x,y,i=1,ans;
	cin>>n>>x>>y;
	ll dp[n+1];
	for(ll i=0;i<=n;i++){
		dp[i]=x*i;
	}
	for(ll i=1;i<n;i++){
		dp[2*i]=min(dp[2*i],dp[i]+y);
		dp[2*i+1]=min(dp[2*i+1],dp[i]+y+x);
		dp[2*i-1]=min(dp[2*i-1],dp[i]+y+x);
	}
    cout<<dp[n]<<endl;
}
