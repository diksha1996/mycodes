#include <bits/stdc++.h>
#define ll long long
#define maxn 100005
#define slld(t) scanf("%lld",&t)
#define sd(t) scanf("%d",&t)
#define pd(t) printf("%d\n",t)
#define plld(t) printf("%lld\n",t)
#define fo(i,n) for(long long i=0;i<n;i++)
#define PI 3.14159265

ll power(ll x, ll y)
{
    if( y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    else
        return x*power(x, y/2)*power(x, y/2);
}

using namespace std;
int main(){
	int t;
	sd(t);
	ll k;
	while(t--){
	slld(k);
    ll curr,prev;
    prev=0;
    curr=0;
for(int i=1;i<k;i++){
	ll p=prev;
	ll count=0;
	while(p>0){
		if(p%10!=8)
		break;
		p=p/10;
		count++;
	}
	ll num=2;
	ll j=1;
	while(count){
		num+=power(10,j);
		j++;
		count--;
	}
	curr=prev+num;
	prev=curr;
	cout<<i<<" ";
	plld(curr);
}

}
}
