#include <bits/stdc++.h>
#define ll long long
#define maxn 100005
#define slld(t) scanf("%lld",&t)
#define sd(t) scanf("%d",&t)
#define pd(t) printf("%d\n",t)
#define plld(t) printf("%lld\n",t)
#define fo(i,n) for(long long i=0;i<n;i++)
#define PI 3.14159265
using namespace std;
struct node{
	int x;
	int y;
	int dist;
};
int main(){
	int n1,m1,p;
	cin>>n1>>m1>>p;
	int m[n1][m1];
	int vis[n1][m1];
	
	for(int i=0;i<n1;i++){
	for(int j=0;j<m1;j++){
		cin>>m[i][j];
		vis[i][j]=0;
	}	
	}
	list<node> q;
	struct node n ;
	struct node temp;
	n.x=0;
	n.y=0;
	n.dist=0;
	vis[0][0]=1;
	q.push_back(n);
	struct node m2;
	while(!q.empty()){
		temp = q.front();
		vis[0][0]=2;
		if((m[temp.x+1][temp.y]==1 || m[temp.x+1][temp.y]==(m[temp.x][temp.y]+1))&&vis[temp.x+1][temp.y]==0&&(temp.x+1)<n1)
		{
			m2.x = temp.x+1;
			m2.y = temp.y;
		if(m[m2.x][m2.y]==p)
		   break;
			vis[m2.x][m2.y]=1;
			m2.dist = temp.dist + 1;
			q.push_back(m2);
		}
		if((m[temp.x][temp.y+1]==1 || m[temp.x][temp.y+1]==(m[temp.x][temp.y]+1))&&vis[temp.x][temp.y+1]==0&&(temp.y+1)<m1)
		{
			//m = new node();
			m2.x = temp.x;
			m2.y = temp.y+1;
		if(m[m2.x][m2.y]==p)
		   break;
			vis[m2.x][m2.y]=1;
			m2.dist = temp.dist + 1;
			q.push_back(m2);
		}
			if((m[temp.x-1][temp.y]==1 || m[temp.x-1][temp.y]==(m[temp.x][temp.y]+1))&&vis[temp.x-1][temp.y]==0&&(temp.x-1)>=0)
		{
		    //m = new node();
			m2.x = temp.x-1;
			m2.y = temp.y;
		if(m[m2.x][m2.y]==p)
		   break;
			vis[m2.x][m2.y]=1;
			m2.dist = temp.dist + 1;
			q.push_back(m2);
		}
		if((m[temp.x][temp.y-1]==1 || m[temp.x][temp.y-1]==(m[temp.x][temp.y]-1))&&vis[temp.x][temp.y-1]==0&&(temp.y-1)>=0)
		{
			//m = new node();
			m2.x = temp.x;
			m2.y = temp.y-1;
		if(m[m2.x][m2.y]==p)
		   break;
			vis[m2.x][m2.y]=1;
			m2.dist = temp.dist + 1;
			q.push_back(m2);
		}
		
	}
	cout<<m2.dist;
}
