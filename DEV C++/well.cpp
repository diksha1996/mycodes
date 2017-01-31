#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
using namespace std;
int main(){
	int n,temp,max,ans,max1,max2,temp1,temp2;
	cin>>n;
	int a[n],dp[n][2];
	for(int i=0;i<n;i++){
		cin>>a[i];
		dp[i][1]=0;
		dp[i][0]=0;
	}
	dp[n-1][0]=a[n-1];
	dp[n-1][1]=0;
	dp[n-2][0]=a[n-2];
	dp[n-2][1]=a[n-2];
	for(int i=n-3;i>0;i--){
		max1=INT_MIN;
		max2=INT_MIN;
		for(int j=i+2;j<n;j++){
			temp1=a[i]+dp[j][0];
			temp2=a[i]+dp[j][1];
			if(temp1>max1)
			max1=temp1;
			if(temp2>max2)
			max2=temp2;
		}
		dp[i][0]=max1;
		dp[i][1]=max2;
	}
	max=INT_MIN;
	for(int j=2;j<n;j++){
			temp=a[0]+dp[j][1];
			if(temp>max)
			max=temp;
	}
	dp[0][0]=max;
	max=INT_MIN;
		for(int i=0;i<n;i++){
			if(dp[i][0]>max)
			{
				max=dp[i][0];
			}
		}
	cout<<max<<endl;
	
}
