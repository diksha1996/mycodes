#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
map<string,string> m;

int main(){
	int x;
	cin>>x;
	string o,n;
	for(int i=0;i<x;i++){
		cin>>o>>n;
		if(m[o]!="")
		m[n]=m[o];
		else
		m[n]=o;
		m.erase(o);
	}
	cout<<m.size()<<endl;
	for(map<string,string>::iterator it = m.begin(); it!=m.end(); it++){
		cout<<(it->second)<<" "<<it->first<<endl;
	}
}

