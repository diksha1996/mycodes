#include<bits/stdc++.h>
#define M 1000000007
#define inf LLONG_MAX
#define MAX 2000009
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
int a[MAX];
ll sum[MAX],pre=LLONG_MIN,ans=LLONG_MIN;
int n,t,u,v,i;
vector<int> g[MAX];
void dfs1(int m,int p)
{
	if(pre!=LLONG_MIN)
	ans = max(ans,pre+sum[m]);
	for(int k=0;k<g[m].size();k++)
	{
		int tmp=g[m][k];
		if(tmp==p)
		continue;
		dfs1(tmp,m);
	}
	pre = max(pre,sum[m]);
}
void dfs(int v,int p)
{	//cout<<v<<" "<<p<<endl;
	sum[v] = a[v];
	for(int j=0;j<g[v].size();j++)
	{
		int tmp=g[v][j];
		if(tmp==p)
		continue;
		dfs(tmp,v);
		sum[v]+=sum[tmp];
	}
}
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	int x=n-1;
	while(x--)
	{
		cin>>u>>v;
		u--;
		v--;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	dfs(0,-1);
	dfs1(0,-1);
	if(ans!=LLONG_MIN)
	cout<<ans<<endl;
	else
	cout<<"Impossible"<<endl;	
	cout<<pre<<endl;
}
