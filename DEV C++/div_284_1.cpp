#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
int main(){
	int n,x,t,l,r,ans=0;
	cin>>n>>x;
	t=1;
	while(n--){
		cin>>l>>r;
		ans = ans + ((l-t)%x) + (r-l+1);
		t = r+1;
	}
	cout<<ans<<endl;
}
