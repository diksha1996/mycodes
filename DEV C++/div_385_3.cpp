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
	string ch;
	cin>>ch;
	int n = ch.length();
	map<string,int> m;
	for(int i=0;i<n;i++)
	{   char c = ch[n-1];
		for(int j=n-1;j>0;j--)
		{
			ch[j]=ch[j-1];
		}
		ch[0]=c;
		if(m[ch]!=1)	
		m[ch]=1;
	}
	cout<<m.size()<<endl;
}
