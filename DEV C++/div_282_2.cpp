#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long int
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
int main(){
	ll a,b,x=0;
	cin>>a>>b;
	if(a==b)
	cout<<"infinity"<<endl;
	else if(b>a)
	cout<<"0"<<endl;
	else
	{
		ll temp = (a-b);
		//int h[temp+1];
		ll limit=(ll)sqrt((double)temp);
		for(ll i=1;i<=limit+1;i++){
			if(temp%i==0)
			{
				if((i*i)==temp&&i>b)
				x++;
				else 
				{
				if(i>b)
				x++;
				if((temp/i)>b)
				x++;
			}
				//9x+=2;
			}
		}
		cout<<x<<endl;
	}
}
