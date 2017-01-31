#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 
using namespace std;
int main(){
	ll a,b,c,ans=0,flag=1;
	string s;
	cin>>s;
	int n=s.length();
	pair<ll,ll> p[n+1];
	p[0] = make_pair(0,0);
	a=0;b=0;c=0;
	for(int i=0;i<n;i++){
		if(s[i]=='A') a++;
		else if(s[i]=='B') b++;
		else c++;
		p[i+1]=make_pair(a-b,a-c);
	}
	sort(p,p+n+1);
	pair <ll,ll> prev=p[0];
	for(int i=1;i<=n;i++){
		if(p[i]!=prev){
			flag=0;
			prev = p[i];
		}
		ans+=flag;
		flag++;
	}
	cout<<ans<<endl;
}
