#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int t,n;
	string s;
	int hash[3];
	cin>>t;
	while(t--){
		for(int i=0;i<3;i++){
			hash[i]=0;
		}
		cin>>n;
		cin>>s;
		for(int i=0;i<n;i++){
			if(s[i]=='R')
			hash[0]++;
			else if(s[i]=='G')
			hash[1]++;
			else
			hash[2]++;
		}
		int maxm;
		maxm = max(hash[0],hash[1]);
		maxm = max(maxm,hash[2]);
		cout<<(n-maxm)<<endl;
	}
}
