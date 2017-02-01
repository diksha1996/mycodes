#include<bits/stdc++.h>
# define ll long long
using namespace std;
int main(){
	long long n,q,t;
	ll min=INT_MAX;
	ll max = INT_MIN;
		cin>>n>>q;
		ll arr[n];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]>max){
				max=arr[i];
			}
			if(arr[i]<min){
				min=arr[i];
			}
		}
		for(ll i=0;i<q;i++){
			cin>>t;
				if(t>=min&&t<=max)
				cout<<"Yes"<<endl;
				else
				cout<<"No"<<endl;	
		}
}
