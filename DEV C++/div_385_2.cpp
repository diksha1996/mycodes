#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
int main()
{
	int n,m,i,j,flag=0,stop=0,f=0,st,sto;
	cin>>n>>m;
	char ch[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>ch[i][j];
			if(ch[i][j]=='X'&&f==0)
			{
				f=1;
				st=i;
			}
			if(ch[i][j]=='X')
			sto=i;
		}
	}
	//cout<<st<<" "<<sto<<endl;
	int v[m];
	for(i=0;i<m;i++)
	v[i]=0;
	for(i=st;i<=sto;i++)
	{
		for(j=0;j<m;j++)
		{
			if(ch[i][j]=='X'&&i==st)
			v[j]=1;
			else if(ch[i][j]=='X')
			{
				if(v[j]!=1)
				{
					flag=1;
					break;
				}
			}
			else if(v[j]==1)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		break;
	}
	if(flag==1)
	cout<<"NO"<<endl;
	else
	cout<<"YES"<<endl;
	}
