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
	int n;
	cin>>n;
	if(n==1)
	cout<<"-1"<<endl;
	else
	cout<<(n)<<" "<<(n+1)<<" "<<(n*(n+1))<<endl;
}
