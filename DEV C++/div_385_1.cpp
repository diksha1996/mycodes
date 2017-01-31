#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
int vis[1001],vr,e;
int ed[1001][1001];
vector<int> gr[1001];
void dfs(int v,int p)
{	//cout<<v<<" "<<p<<endl;
	if(vis[v])
	return;
	vis[v]=1;
	vr++;
//	cout<<"nov "<<vr<<endl;
	for(int j=0;j<gr[v].size();j++)
	{
		int tmp=gr[v][j];
		if(vis[tmp]==0)
		{
			dfs(tmp,v);
		//	cout<<"noe "<<e<<endl;
		}
	}
}
int main()
{
	int n,m,k,i,j,s,count=0,ans=0,mx = INT_MIN,l,u,v;
	cin>>n>>m>>k;
	int c[k];
	for(i=0;i<k;i++)
	{
		cin>>c[i];
	}
	for(i=0;i<m;i++)
	{
		cin>>u>>v;
		gr[u-1].push_back(v-1);
		gr[v-1].push_back(u-1);
	}
	for(i=0;i<k;i++)
	{	 vr=0,e=0;
		//cout<<"i="<<endl;
		dfs(c[i]-1,-1);
		//cout<<vr<<e<<endl;
		ans = ans + (vr*(vr-1)/2);
		//cout<<ans<<endl;
		if(mx<vr)
		mx=vr;
	}
	//cout<<"mx "<<mx<<endl;
	 vr=0,e=0;
	for(i=0;i<n;i++)
	{
		if(vis[i]==0)
		dfs(i,-1);		
	}
	//cout<<vr<<e<<endl;
	ans = ans + (vr*(vr-1)/2);
	ans = ans + (mx*vr);
	ans = ans-m;
	cout<<ans<<endl;
}
