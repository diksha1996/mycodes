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
	int n,i=0,j,k=0;
	string s;
	cin>>n;
	cin>>s;
	char ans[n];
	while(i<n)
	{
		if((i+2)<n&&s[i]=='o'&&s[i+1]=='g'&&s[i+2]=='o')
		{
			j=i+3;
			while(j<n)
			{
				if((j+1)<n&&s[j]=='g'&&s[j+1]=='o')
			{
				j+=2;
				continue;
			}
			else
			break;
			}
			ans[k]='*';
			ans[k+1]='*';
			ans[k+2]='*';
			k+=3;
			i=j;
		}
		else
		{
			ans[k]=s[i];
			i++;
			k++;
		}
	}
	for(i=0;i<k;i++)
	cout<<ans[i];
}
