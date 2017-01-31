#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n=s.length();
	int count=0,a,b;
	char ptr = 'a';
	for(int i=0;i<n;i++){
		if(s[i]>ptr){
		a=(s[i]-ptr)%26;
		b=(ptr-s[i]+26)%26;	
		}
		else
		{
		a=(s[i]-ptr+26)%26;
		b=(ptr-s[i])%26;
	}
		count+=(a>b?b:a);
		ptr=s[i];
	}
	cout<<count<<endl;
}
