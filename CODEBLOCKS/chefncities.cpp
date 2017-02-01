#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
int main(){
	int n;
	cin>>n;
	ll arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int p,r,q;
	ll f;
	cin>>q;
	int type;
	while(q--){
		cin>>type;
		if(type==1){
		cin>>p>>f;
		arr[p-1]=f;	
		}
		if(type==2){
			ll njoymnt = arr[0];
			cin>>r;
			int i=1;
			int temp = 1+r;
			while(temp<=n){
				njoymnt*=arr[temp-1];
				i++;
				temp = 1+(i*r);
			}
			temp = njoymnt;
			while(temp > 10000)
             temp /= 10000;
            while(temp > 9)
              temp /= 10;
			cout<<temp<<" "<<(njoymnt%mod)<<endl;
		}
	}
}
