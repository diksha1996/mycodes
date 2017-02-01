#include<bits/stdc++.h>
using namespace std;
int ans=0;
int visited[11][11];
int maze[11][11];
void dfs(int r,int c,int a){
	if(r==a&&c==a)
	{
		ans++;
		return;
	}
	visited[r][c]=1;
	if(visited[r+1][c]!=1&&maze[r+1][c]==0&&r+1<=a){
		dfs(r+1,c,a);
	}
	if(visited[r][c+1]!=1&&maze[r][c+1]==0&&c+1<=a){
		dfs(r,c+1,a);
	}
	if(visited[r-1][c]!=1&&maze[r-1][c]==0&&r-1>=0){
		dfs(r-1,c,a);
	}
	if(visited[r][c-1]!=1&&maze[r][c-1]==0&&c-1>=0){
		dfs(r,c-1,a);
	}
	visited[r][c]=0;
	return;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>maze[i][j];
			visited[i][j]=0;
	}
	}
	dfs(0,0,n-1);
	cout<<ans;
}
