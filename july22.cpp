#include<bits/stdc++.h>
# define ll long long
using namespace std;

int main(){
	int t,n;
	ll sum;
	cin>>t;
	while(t--){
		sum=0;
		cin>>n;
		ll x[n],d[n-1];
		string arr;
	//	int con[n];
		cin>>arr;
		for(int i=0;i<n;i++){
			cin>>x[i];
			if(i>0)
			d[i-1]=x[i]-x[i-1];
		//	d2[i-1]=x[i]-x[i-1];
		}
		
	//	sort(d2,d2+n-1);
		int i,one=0;
	for( i=0;i<n-1;i++){
		if(arr[i]=='0')
		sum+=d[i];
		if(arr[i]=='1')
		break;
		//cout<<sum<<endl;
	}
	if(i<n-1)
	sum+=d[i];
	ll max=d[i];
	for(int j=i+1;j<n;j++){
		if(arr[j]=='0'&&j<n-1)
		{
		sum+=d[j];
		if(d[j]>max)
		max=d[j];
		}
		else if(arr[j]=='1'){
			sum-=max;
			max=d[j];
			if(j<n-1)
			sum+=d[j];
		}
	//	cout<<sum<<endl;
	}
	
		cout<<sum<<endl;	
	}
	
}
