#include<bits/stdc++.h>
#define M 1000000007
#define ll long long 
#define f first 
#define s second 
using namespace std;
int vis[101][101];
long long dist[101][101];
int A[101][101];
int t,m,n,x,y,d;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool valid(int x,int y) {
  return (x>=0 && x<=m-1 && y>=0 && y<=n-1);
}
int main(){
	cin>>t;
	while(t--){
	for(int i=0;i<=100;i++) {
      for(int j=0;j<=100;j++) {
        dist[i][j]=1000000007;
        vis[i][j]=0;
    }  
	}
		cin>>m>>n>>x>>y>>d;
	for(int i=0;i<m;i++) {
      for(int j=0;j<n;j++) {
        cin>>A[i][j];
      }
    }
		x--;y--;
		pair<int,int> p;
		queue<pair<int,int> > q;
		q.push(make_pair(0,0));
		dist[0][0]=0;
		vis[0][0]=1;
		while(!q.empty()){
			p=q.front();
			q.pop();
			for(int i=0;i<4;i++)
			{    int nx,ny;
			     nx=p.f+dx[i];
			     ny=p.s+dy[i];
				if(valid(nx,ny)&&(!vis[nx][ny])&&abs(A[nx][ny]-A[p.f][p.s])<=d)
				{
					q.push(make_pair(nx,ny));
					vis[nx][ny]=1;
					dist[nx][ny]=dist[p.f][p.s]+1;
				}
			}	
		}
		if(dist[x][y]==1000000007)
		cout<<"-1"<<endl;
		else
		cout<<(dist[x][y]-1)<<endl;
	}
}

