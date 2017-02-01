#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int ca=0,cb=0;
	int p=0;
	int ans=0;
	for(int i=0;i<n;i++){
		p=0;
		if(s[i]=='a')
		ca++;
		else
		cb++;
		while(p<=i&&min(ca,cb)>k)
		{
		if(s[p]=='a')
		ca--;
		else
		cb--;
		p++;
		}
		ans = max(ans,i-p+1);
	}
	cout<<ans;
}
