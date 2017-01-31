#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
int main(){
	int t,n,nl,nw;
	cin>>t;
	while(t--){
		cin>>n;
		ll a[n];
		nl=0;
		nw=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==0)
			nl++;
			else
			{
				if(a[i]%2==0)
				{	int m = a[i]/2;
					if(m%2==0)
					nw=nw+(a[i]/2);
					else
					nw++;
				}
				else 
				nl++;
			}
		}
		if(nw%2==1)
		cout<<"Khaleesi Won"<<endl;
		else
		cout<<"Cersei Won"<<endl;
	}
}
