#include<iostream>
using namespace std;
long long int power(long long int k,long long int n,long long int m){
	if(n==0)
	return 1;
	else if(n==1)
	return k;
	else{
		if(n%2==1)
		{
			long long int a = power(k,n-1,m);
			return ((a%m)*(k%m))%m;
		}
		else{
			long long int a = power(k,n/2,m);
			return ((a%m)*(a%m))%m;
		}
			}
}
int main(){
	long long int n,k;
	long long int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		long long int ans;
		ans = power(k-1,n-1,1000000000+7);
		ans = (k*ans)%(1000000007);
		cout<<ans<<endl;
	}
}
