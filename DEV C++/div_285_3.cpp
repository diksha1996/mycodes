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
	int v,n=0,e,j;
	cin>>v;
	int deg[v],xo[v];
	for(int i=0;i<v;i++){
		cin>>deg[i]>>xo[i];
		n+=deg[i];
	}
	e=n/2;
	cout<<e<<endl;
	for(int i=0;i<v;i++){
		j=i;
		while(j<v){
			if(deg[j]!=1) 
			break;
			cout<<j<<" "<<xo[j]<<endl;
			deg[j]=0;
			deg[xo[j]]--;
			xo[xo[j]] = xo[xo[j]]^j;
			if(deg[xo[j]]==1)
			j=xo[j];
		}
	}
}
