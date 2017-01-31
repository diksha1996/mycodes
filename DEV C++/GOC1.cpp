#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	float k,s,t1,t2,noz;
	cin>>t;
	while(t--){
		cin>>n>>k;
		float a[n];
		s=0;
		noz=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			s+=a[i];
			if(a[i]==0)
			noz++;
		}
		t1 = s-k;
		t2 = 0.9*(n-noz);
	//	cout<<t1<<" "<<t2<<endl;
		if(t1>=0&&t1<=t2)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
