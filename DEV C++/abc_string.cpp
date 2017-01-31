#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
int main(){
	ll a,b,c,count=0;
	string s;
	cin>>s;
	int n=s.length();
	for(int l=3;l<=n;l+=3){
		a=0;b=0;c=0;
		for(int i=0;i<l;i++){
			if(s[i]=='A') a++;
			else if(s[i]=='B') b++;
			else c++;
		}
		if(a==b&&b==c)
		count++;
		int k=0;
		while(k<n-l){
			if(s[k]=='A') a--;
			else if(s[k]=='B') b--;
			else c--;
			if(s[k+l]=='A') a++;
			else if(s[k+l]=='B') b++;
			else c++;
			if(a==b&&b==c)
			count++;
			k++;	
		}
	}
	cout<<count;
}
