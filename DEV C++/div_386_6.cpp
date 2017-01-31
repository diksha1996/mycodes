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
	int n,w,k,ti,i,j,s,mx=INT_MIN;
	cin>>n>>w>>k;
	int a[n],t[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	cin>>t[i];
	for(i=0;i<n;i++)
	{	s=0;
		ti=0;
		for(j=i;j<i+w;j++)
		{
			if((ti+(t[j]+1)/2)<=k)
			{
				s+=a[j];
				ti+=(t[j]+1)/2;
			}
		}
		if(s>mx)
		mx=s;
	}
	cout<<mx<<endl;
}
