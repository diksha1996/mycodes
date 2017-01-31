#include<iostream>
#define mod 1000000007 
using namespace std;
long long power(int x,int y)
{
	//cout<<m;
    long long res = 1;      // Initialize result
 
    x = x % mod;  // Update x if it is more than or 
                // equal to p
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % mod;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % mod;  
    }
    return res;
}
 
int main(){
	int t,n,k,flag;
	int i;
	long long ans;
//	cout<<m<<endl;
	cin>>t;
	while(t--){
		flag=0;
		cin>>n>>k;
		if(n>k){
		ans =((power(2,n-1)-((n-k)*power(2,n-k-1))%mod+mod)%mod+((n-k-1)*power(2,n-k-2))%mod)%mod;
	}
	else
	{
		ans = power(2,n-1);
	}
		 cout<<ans<<endl;
	}
}
