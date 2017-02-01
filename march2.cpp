#include<iostream>
#include<limits.h>
#include<stdlib.h>
using namespace std;
int main(){
	int t,i,n,j,k;
	long long p[100001],sum,max;
	cin>>t;
	for(i=0;i<t;i++){
			max=INT_MIN;
			sum=0;
		cin>>n>>k;
		long long a[n],b[n];
		for(j=0;j<n;j++){
			cin>>a[j];
		}
		for(j=0;j<n;j++){
			cin>>b[j];
		}
		for(j=0;j<n;j++){
			p[j]=a[j]*b[j];
			sum+=p[j];
		}
		for(j=0;j<n;j++){
		if(abs(b[j])>max)
		max=abs(b[j]);
		}
		sum+=(max*k);
		cout<<sum<<"\n";
	}
}
