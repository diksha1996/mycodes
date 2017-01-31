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
	int n,i,a=0,g=0,c=0,t=0,q=0,x;
	cin>>n;
	char ch[n];
	cin>>ch;
	for(i=0;i<n;i++)
	{
		if(ch[i]=='A')
		a++;
		else if(ch[i]=='G')
		g++;
		else if(ch[i]=='T')
		t++;
		else if(ch[i]=='C')
		c++;
		else
		q++;
	}
	x = (a+g+c+t+q)/4;
	for(i=0;i<n;i++)
	{
		if(ch[i]=='?'&&q>0)
		{
			if(a<x)
			{
				ch[i]='A';
				a++;
				q--;
			}
			else if(g<x)
			{
				ch[i]='G';
				g++;
				q--;
			}
			else if(t<x)
			{
				ch[i]='T';
				t++;
				q--;
			}
			else if(c<x)
			{
				ch[i]='C';
				c++;
				q--;
			}
		}
	}
	if((a!=x)||(g!=x)||(t!=x)||(c!=x)||(q!=0))
	cout<<"==="<<endl;
	else
	cout<<ch<<endl;
	
}
