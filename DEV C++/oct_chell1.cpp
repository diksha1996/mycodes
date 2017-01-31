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
	ll t,n,m,c,count;
	cin>>t;
	while(t--){
		count=0;
		cin>>n>>m>>c;
		if(c<=(n*m)){
		for(int i=1;i<=c;i++){
			if(c%i==0){
				int temp = c/i;
				if(i<=n&&temp<=m)
				{
					count++;
				}
			}
		}
	}
	cout<<count<<endl;
	}
}
