#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
char s2[2000];
int hsh[2000];
int main()
{
	int n,i,j,l,in;
	cin>>n;
	char s1[n];
	cin>>s1;
	l=n;
	for(i=0;i<n;i++)
	{
		if(l%2==0)
		in = l/2 -1;
		else
		in = l/2;
	//	cout<<in<<" "<<hsh[in]<<endl;
		while(hsh[in]!=0)
		in++;
		s2[in]=s1[i];
		hsh[in]=1;
		l--;
	}
	cout<<s2<<endl;		
}
