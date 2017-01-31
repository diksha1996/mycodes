    #include <bits/stdc++.h>
    #define MAX 1000001
    #define M 1000000007
    using namespace std;
     
    int n,k; 
    int dp[10001][11];
     
    int DP(){
    	for (int i=0;i<=n;i++) dp[i][k] = 0;
    	for (int i=0;i<k;i++) dp[n-1][i] = 1;
    	for (int i=n-2;i>=0;i--){
    		for (int j = k-1;j>=0;j--){
    			dp[i][j] = (dp[i+1][0]+dp[i+1][j+1])%M;
    		//	cout<<i<<" "<<j<<" "<<dp[i][j]<<endl;
    		}
    	}
    	return dp[0][0];
    }
     
    int main(){
    	int t;
    	scanf("%d",&t);
    	while(t--){
    		scanf("%d%d",&n,&k);
    		printf("%d\n",DP());
    	}
     	return 0;
    }
     


