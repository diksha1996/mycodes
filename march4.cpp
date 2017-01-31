#include<bits/stdc++.h>
using namespace std;
long long int oneswap(string s){
	int n = s.length();
	return (n*(n-1)/2);
}
long long int twoswap(string s){
	int n = s.length();
	return n;
}
long long int permutations(int n){
	if(n==1||n==0)
	return 1;
	else
	return n*permutations(n-1);
}
int main(){	
int t;
string s;
cin>>t;
while(t--){
cin>>s;
int n = s.length();
if(n==1)
res=0;
else{
long long int one = oneswap(s);
long long int two = twoswap(s);
long long int perm = permutations(n);
long long int res = (perm -(1+one+two))*perm;
}
cout<<res<<endl;
}
}

