#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define s second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	pair<int,int> dp[n];
	for(int i=0;i<n;i++)
	{cin>>a[i];
	if(i>0){
		if(a[i]-a[i-1]>0)
		dp[i].second=1;
		else
		dp[i].second=-1;
	  dp[i].first=2;	
	}
	 
	}
	dp[0].first=1;
	for(int i=2;i<n;i++){
		for(int j=1;j<i;j++){
		  if((dp[j].second*dp[i].second)<0&&dp[i].first<dp[j].first+1)
		  	dp[i].first=dp[j].first+1;
		}
	}
	int max=INT_MIN;
	for(int i=0;i<n;i++){
	 if(max<dp[i].first)
	 max=dp[i].first;	
	}
	cout<<max<<endl;
}
