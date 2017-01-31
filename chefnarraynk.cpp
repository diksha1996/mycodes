#include<bits/stdc++.h>
#define ll long long
long long fact[100001];
int power(long long base, long long n,long long M)
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    long long halfn=power(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
   int findMMI_fermat(int n,int M)
{
    return power(n,M-2,M);
}
using namespace std;
int main(){
	long long fact[100001];
	int mod = 1000000007;
	fact[0]=1;
	fact[1]=1;
	for(int i=2;i<100001;i++){
		fact[i]=(fact[i-1]*i)%mod;
	}
	int n,k,t;

	cin>>t;
	while(t--){
		cin>>n>>k;
		int count=0;
		long long arr[n];
      for(int i=0;i<n;i++)
    	{
	       cin>>arr[i];
	       if(arr[i]==0)
	        count++;
        }
		long long temp,den,num,ans=0;
		int m;
		if(count==0){
		if(k%2==0)
			 m=0;
			else
		 	 m=1;
		 	int cnt= min(n,k);
		   for(m;m<=cnt;m+=2){
		   	 temp = (fact[m]*fact[n-m])%mod;
		     den = findMMI_fermat(temp,mod);
		   	 num = fact[n];
		   	ans = (ans+((num*den)%mod))%mod;
		   }
		}
		else{
			 m=0;
			 ans=0;
			n=n-count;
			int cnt= min(n,k);
		   for(m;m<=cnt;m++){
		   	 temp = (fact[m]*fact[n-m])%mod;
		   	 den = findMMI_fermat(temp,mod);
		   	 num = fact[n];
		   	ans = (ans+((num*den)%mod))%mod;
		   }
		}
		cout<<ans<<endl;
	}
}
