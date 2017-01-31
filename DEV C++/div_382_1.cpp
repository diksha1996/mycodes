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
	int n,k,g,t,i,x,y;
	cin>>n>>k;
	char ch[n];
	for(i=0;i<n;i++)
	{
		cin>>ch[i];
		if(ch[i]=='G')
		g=i;
		else if(ch[i]=='T')
		t=i;
	}
	if((abs(g-t)%k)!=0)
	cout<<"NO"<<endl;
	else
	{   x = min(g,t);
		y = max(g,t);
		while((x+k)<=y)
		{
			if(ch[x+k]=='#')
			{
				cout<<"NO"<<endl;
				break;
			}
			else if((x+k)==y)
			{
				cout<<"YES"<<endl;
				break;
			}
			else
			x=x+k;
		}
	}
}
