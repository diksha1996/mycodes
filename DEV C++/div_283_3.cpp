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
	int n,m,ans=0;
	cin>>n>>m;
	int t,flag=0;
	char s[n][m+1];
	int h[n];
	for(int i=0;i<n;i++){
		h[i]=-1;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		cin>>s[i][j];
		s[i][m]='\0';
	}
	int prev=-1;
	for(int i=0;i<m;i++){
		flag=0;
		int j;
		for(j=0;j<n-1;j++){
			if(h[j]==-1)
			{
				if(s[j][i]>s[j+1][i])
				{
					ans++;
					break;
				}
				else if(s[j][i]<s[j+1][i])
				{
					flag==0;
				}
				else
				flag=1;
			}
		}
		if(j==(n-1)&&flag==0)
		break;
		else if(j==(n-1)&&flag==1)
		{
		//	prev=i;
			
			for(j=0;j<n-1;j++){
				if((s[j][i]<s[j+1][i])&&h[j]==-1)
				{
					h[j]=i;
				}
			}
		}
		//cout<<"i="<<i<<"  ans="<<ans<<endl;
	}
	cout<<ans<<endl;
}
