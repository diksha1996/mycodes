#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int k;
		cin>>s;
		cin>>k;
		int n = s.length();
		int hash[26];
		for(int i=0;i<26;i++){
			hash[i]=0;
		}
		for(int i=0;i<n;i++){
			hash[s[i]-97]++;
		}
		for(int i=0;i<26;i++){
			cout<<hash[i]<<"";
		}
		int i=0;
		while(k>0){
			while(hash[i]&&k>0){
				cout<<(char)(i+97);
				k--;
				hash[i]--;
			}
			i++;
		}
		cout<<endl;
}
}
