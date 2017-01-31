#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long 

using namespace std;
int main(){
	string s;
	ll ans=1;
	cin>>s;
	int n=s.length();
	for(int i=0;i<n;i++){
		ans = (ans*(91-s[i]))%M;
	}
	ans = (ans%M - 1 +M)%M;
	cout<<ans<<endl;
}
