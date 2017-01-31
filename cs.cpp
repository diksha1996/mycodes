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
		char s1[n];
		for(int i=0;i<n;i++){
			s1[i]=s[i];
		}
		sort(s1,s1+n);
		for(int i=0;i<k;i++){
			cout<<s1[i];
		}
		cout<<endl;
}
}
