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
	int n,i;
	cin>>n;
	if(n%2==0)
	{
		cout<<n/2<<endl;
		for(i=0;i<n/2;i++)
		cout<<"2 ";
	}
	else
	{
		cout<<n/2<<endl;
		for(i=0;i<(n/2-1);i++)
		cout<<"2 ";
		cout<<"3";
	}
}
