#include <bits/stdc++.h>
#define ll long long
#define maxn 100005
#define slld(t) scanf("%lld",&t)
#define sd(t) scanf("%d",&t)
#define pd(t) printf("%d\n",t)
#define plld(t) printf("%lld\n",t)
#define fo(i,n) for(long long i=0;i<n;i++)
#define PI 3.14159265
ll alleven(ll n){
	int flag=0;
	while(n>0){
		if((n%10)%2!=0)
		{
			flag=1;
			break;
		}
		n=n/10;
	}
if(flag==0)
return 1;
else
return 0;
}
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
	ll n;
	while(t--){
	slld(n);
/*	ll temp=1;
	ll i=2;
	ll num=0;
	
	while(temp<k){
	if(alleven(i))
		{temp++;
		num=i;
		cout<<temp<<" "<<i<<endl;
	}
		i++;
	}
   cout<<num<<endl;
	}*/
	int arr[]={0,2,4,6,8};
	stack<int> s;
	ll m=0,k=1,temp;
	ll p = 1;
	ll sub =  5;
    while((n-p)>=0){
	temp = n%sub;
	ll x=0;
	if(temp==0)
	x=4;
	else{
	/*	while(temp>0){
			temp-=power(5,m);
			if(temp>0)
			x++;
		}*/
		if(temp%p==0)
		x = temp/p -1;
		else
		x = temp/p;
	}
	s.push(arr[x]);
	m++;
	k++;
	p*=5;
	sub*=5;
}
if(n==1)
{cout<<"0";
s.pop();
}
else{
	int t=s.top();
	if(t==0)
	s.pop();
while(!s.empty()){
	t=s.top();
	s.pop();
	cout<<t;
}
}
cout<<endl;
}
}
