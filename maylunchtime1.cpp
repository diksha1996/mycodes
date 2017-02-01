#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	string x,y;
	cin>>t;
	while(t--){
		cin>>x;
		cin>>y;
		long long n=x.length();
		char z[n];
		for(long long i=0;i<n;i++){
			if(x[i]==y[i]){
				if(x[i]=='W')
				z[i]='B';
				else
				z[i]='W';
				
			}
			else{
				z[i]='B';
			}
			cout<<z[i];
		}
		cout<<endl;
		x.clear();
			y.clear();
	}
}
