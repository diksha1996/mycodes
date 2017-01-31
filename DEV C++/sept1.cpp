#include<iostream>
#include<string>
using namespace std;
int main(){
	int t,c1,c0;
	cin>>t;
	string s;
	while(t--){
		c1=0;
		c0=0;
		cin>>s;
		int n = s.length();
		for(int i=0;i<n;i++){
			if(s[i]=='0')
			c0++;
			else
			c1++;
		}
		if(c0==1||c1==1)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
}
