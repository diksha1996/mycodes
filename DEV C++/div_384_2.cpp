#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
int d[50];
ll power(ll x,ll y)
{
    ll res = 1; 
   // x = x%M;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x);
        y = y>>1; 
        x = (x*x);  
    }
    return res;
}
void cmp()
{   d[0]=1;
	for(int i=1;i<50;i++)
	{
		d[i]=(2*d[i-1])+1;
	}
}
int main(){
//	cmp();
	ll n,k,t,x,a,i=0;
	cin>>n>>k;
	//cout<<n<<" "<<k<<endl;
	while(1)
	{  
		if((k%power(2,i+1))	== power(2,i))
	{
			cout<<(i+1)<<endl;
			break;
	}
	i++;
	}
}
