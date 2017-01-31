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
int main(){
	int t;
	sd(t);
	char A[1000001],B[1000001];
	ll c1,c0;
	while(t--){
		cin>>A;
		cin>>B;
		c1=0;
		c0=0;
		ll n = strlen(A);
		//cout<<n<<endl;
		fo(i,n)
		{if(A[i]=='1')
		c1++;
		if(A[i]=='0')
		c0++;}
		if(c1==n||c0==n)
		cout<<"Unlucky Chef"<<endl;
		else{
			ll c01 = 0;
			ll c10 = 0;
			fo(i,n){
				if(A[i]!=B[i])
				{
				if(A[i]>B[i])
				c10++;
				else
				c01++;
				}
			}			
				cout<<"Lucky Chef"<<endl;
				plld(min(c10,c01)+abs(c10-c01));
		}
	}
//	cout<<std::string::max_size();
}
