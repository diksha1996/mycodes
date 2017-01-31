#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
int gems[30005]={0};
int dp[30500][500];
int fun(int s,int d){
	if(dp[s][d]>=0) 
	return dp[s][d];
	int res=0;
	for(int i=-1;i<2;i++){
		int x=s+d+i;
		if(x>s&&x<30001)
		{
			res=max(res,fun(x,d+i));
		}
	}
	dp[s][d]=res+gems[s];
	return dp[s][d];
}
int main(){
	int n,d,t,i,ans=0;
	cin>>n>>d;
	for(i=0;i<n;i++)
	{
		cin>>t;
		gems[t]++;
	}
	memset(dp, -1, sizeof (dp) );
	cout<<fun(d,d);
}
