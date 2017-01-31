#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
int tree[10000][10000];
ll v[100000],ans[100000];
pair<int,int> p[100000];
int isleaf(int i,int n){
	int j;
	for(j=0;j<n;j++)
			{
				if(tree[i][j]!=0)
				break;
			}
			if(j==n)
			return 1;
			else return 0;
}
int fun(int x,int n){
	if(isleaf(x,n))
	{
		return v[x]	;	
	}
	else
	{	int m = INT_MIN,temp;
		for(int i=0;i<n;i++){
			if(tree[x][i]!=0){
				ans[i]=fun(i,n);
				temp= max(max(ans[i], (v[x]^v[i]) ),ans[i]^v[x]);
				if(temp>m)
			    	m=temp;
			}
			
		}
		ans[x]=m;
		return ans[x];	
	}
}

int main(){
	int t,n,x,y;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			ans[i]=0;
			v[i]=0;
		}
		//memset(tree,0,n*n);
		//memset(ans,0,n);
		//memset(v,0,n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		for(int i=0;i<n-1;i++){
			cin>>x>>y;
			p[i]=make_pair(x,y);
			tree[x-1][y-1]=1;
		}
		for(int i=0;i<n;i++){
			ans[i]=fun(i,n);
			cout<<ans[i]<<endl;
		}
		for(int i=0;i<n-1;i++)
		{
			tree[p[i].fi-1][p[i].se-1]=0;
		}
	}
}
