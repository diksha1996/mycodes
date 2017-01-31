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
	int a,b,c,d,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d;
	if(a==0||b==0||c==0||d==0)
	{
		cout<<"Yes"<<endl;
		continue;
	}
	if((a+b)==0||(a+c)==0||(a+d)==0||(b+c)==0||(b+d)==0||(c+d)==0)
	{
		cout<<"Yes"<<endl;
		continue;
	}
	if((a+b+c)==0||(a+c+d)==0||(a+b+d)==0||(b+c+d)==0)
	{
		cout<<"Yes"<<endl;
		continue;
	}
	if((a+b+c+d)==0)
	{
		cout<<"Yes"<<endl;
		continue;
	}
	else
	cout<<"No"<<endl;
	}
}
