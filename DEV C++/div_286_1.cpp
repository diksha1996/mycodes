#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
int g[103][103][103]={0};
int main(){
	int n,m,u,v,c,q,i,j,k,ans;
	cin>>n>>m;
	for(i=0;i<m;i++){
		cin>>u>>v>>c;
		g[u][v][c]=1;
		g[v][u][c]=1;
	}
	for(k=1;k<=n;k++){
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				for(c=1;c<=100;c++){
					if(g[i][k][c]&&g[k][j][c])
					g[i][j][c]=1;
				}
			}
		}
	}
	cin>>q;
	while(q--){
		ans=0;
		cin>>u>>v;
		for(c=1;c<=100;c++){
			if(g[u][v][c])
			ans++;
		}
		cout<<ans<<endl;
	}
}
