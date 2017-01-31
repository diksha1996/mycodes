#include<iostream>
using namespace std;
int main(){
	int n;
	char s[100000];
	cin>>n;
	int i=0;
	while(n!=0){
		s[i++]=(n%26)+96;
		n = n/26;
	}
	int st = 0,en = i-1;
	while(st<en){
		char t = s[st];
		s[st]=s[en];
		s[en]=t;
		st++;
		en--;
	}
	s[i]='\0';
	cout<<s;
}
