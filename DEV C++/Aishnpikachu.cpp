#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define long long ll

using namespace std;
int num[MAX];
int cnt[11][MAX];
void sieve(){
	for(int i=2;i<MAX;i++){
		if(num[i]==0){
		num[i]=1;
		for(int j=i*2;j<MAX;j+=i)
		    num[j]++;
		}
	}
	for(int i=0;i<=10;i++){
		for(int j=1;j<MAX;j++){
			if(num[j]==i) cnt[i][j]=cnt[i][j-1]+1;
			else cnt[i][j]=cnt[i][j-1];
		}
	}
}

int main(){
	int t,x,y,k,res;
	cin>>t;
	sieve();
	while(t--){
		cin>>x>>y>>k;
		res = cnt[k][y]-cnt[k][x];
		if(res) cout<<res<<endl;
		else cout<<"-1"<<endl;
	}
}
