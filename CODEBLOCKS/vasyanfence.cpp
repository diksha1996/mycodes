#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,h;
	cin>>n>>h;
	int a[n];
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>h)
		ans+=2;
		else
		ans+=1;
	}
	cout<<ans;
}
