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
	ll n,i,x,y,px,py,pd,d,ix,iy,ans=1,d2;
	cin>>n;
	string s;
	cin>>s;
	pd=0;x=0;y=0;ix=0;iy=0;px=0;py=0;
	for(i=0;i<n;i++)
	{
		if(s[i]=='L')
		{
			x-=(i+1);	
		}
		else if(s[i]=='R')
		{
			x+=(i+1);	
		}	
		else if(s[i]=='U')
		{
			y+=(i+1);	
		}
		else
		{
			y-=(i+1);
		}
		d = pd+abs(px-x)+abs(py-y);
		d2 = abs(ix-x)+abs(iy-y);
		if(d==d2)
		{
			pd=d;
			px=x;
			py=y;
		}
		else
		{
			ans++;
			ix=px;
			iy=py;
			pd=abs(x-ix)+abs(y-iy);
			px=x;
			py=y;		
		}
		
	}
	cout<<ans<<endl;
}
