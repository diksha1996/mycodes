#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
map<int,int> m;
int hsh[26];
int main()
{
	string s,t;
	int i,c=0;
	cin>>s;
	cin>>t;
	int n=s.length();
//	cout<<n<<endl;
	for(i=0;i<n;i++)
	{//cout<<"i="<<i<<endl;
			if(m[s[i]]==0&&m[t[i]]==0)
		{
			m[s[i]]=t[i];
			m[t[i]]=s[i];
		}
		else
		{
			if(m[s[i]]!=t[i])
			{
				//cout<<"break"<<endl;
				break;
			}
		}
	}
	//cout<<i<<endl;
	if(i!=n)
	cout<<"-1"<<endl;
	else
	{
		for(i=0;i<n;i++)
		{
			if(hsh[s[i]-97]==0&&s[i]!=t[i])
			{
				c++;
				hsh[s[i]-97]=1;
				hsh[t[i]-97]=1;
			}
		}
		cout<<c<<endl;
		for(i=0;i<26;i++)
		hsh[i]=0;
		for(i=0;i<n;i++)
		{
			if(hsh[s[i]-97]==0&&s[i]!=t[i])
			{
				cout<<s[i]<<" "<<t[i]<<endl;
				hsh[s[i]-97]=1;
				hsh[t[i]-97]=1;
			}
		}
	}
}
