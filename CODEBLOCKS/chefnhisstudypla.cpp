#include <bits/stdc++.h>
#define ll long long
#define maxn 100005
#define slld(t) scanf("%lld",&t)
#define sd(t) scanf("%d",&t)
#define pd(t) printf("%d\n",t)
#define plld(t) printf("%lld\n",t)
#define fo(i,n) for(long long i=0;i<n;i++)
#define PI 3.14159265
using namespace std;
int main (){
	ll n,q;
	cin>>n>>q;
	ll a[n],b[n];
	fo(i,n){
		cin>>a[i]>>b[i];
	}
	int swap;
	{
    std::pair<int, int> AB[n];

    //copy into pairs
    //Note that A values are put in "first" this is very important
    for( size_t i = 0; i<n; ++i)
    {
      AB[i].first  = b[i];
      AB[i].second = a[i];
    }

    std::sort(AB, AB+n);

    //Place back into arrays
    for( size_t i = 0; i<n; ++i)
    {
      b[i] = AB[i].first;  //<- This is actually optional
      a[i] = AB[i].second;
    }
  }
  ll s,e;
	fo(i,q){
		ll ans=0;
		cin>>s>>e;
		fo(i,n){
			if(b[i]<=e){
				if(a[i]>=s){
					ans++;
					s=b[i]+1;
				}
			}
			else
			break;
		}
		cout<<ans<<endl;	
	}
}
	
	
