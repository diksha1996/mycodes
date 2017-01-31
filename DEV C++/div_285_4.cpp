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
	ll n,op=0,oq=0,x=1;
	cin>>n;
	int p[n],q[n],ans[n];
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
		ans[i]=i;
	}
	for(int i=0;i<n;i++)
	cin>>q[i];
	while(prev_permutation(p,p+n))
	op++;
	//cout<<"op="<<op<<endl;
	while(prev_permutation(q,q+n))
	oq++;
	//cout<<"oq="<<oq<<endl;
	for(int i=1;i<=n;i++){
		x = x*i;
	}
	ll t = (op+oq)%x;
	//cout<<"t="<<t<<endl;
	while(t>0){
		next_permutation(ans,ans+n);
		t--;
	}
	for(int i=0;i<n;i++)
	cout<<ans[i]<<" ";
}
