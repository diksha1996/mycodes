#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
int is_sqrt(int x)
{
	int t = sqrt(x);
	if((t*t)==x)
	return 1;
	else return 0;
}
int main()
{
	int n,a,b,t;
	cin>>n;
	if(is_sqrt(n))
	{
		cout<<sqrt(n)<<" "<<sqrt(n);
	}
	else
	{
		for(int i=n-1;i>0;i--)
		{
			if(is_sqrt(i))
			{
				t = sqrt(i);
				if(n%t==0)
				{
					cout<<t<<" "<<(n/t)<<endl;
					break;
				}
			}
		}
	}
}
