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
	int n,noz=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=1;i<n;i++){
		if(s[i]-s[i-1]==0)
		noz++;
	}
	if(noz%2==0)
	cout<<(noz/2)<<endl;
	else
	cout<<(noz+1)/2<<endl; 
}
	
