#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
int hash[1001];
int main(){
	int t,n,area=0;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			hash[a[i]]++;
		}
		for(int i=0;i<n;i++){
			if(hash[a[i]]<2)
			a[i]=0;
		}
		int in = max_element(a,a+n)-a;
		int x=a[in];
		a[in]=0;
		in = max_element(a,a+n)-a;
		int y = a[in];
		if(hash[x]>=2&&hash[x]<4)
		area = x*y;
		else
		area = x*x;
		cout<<area<<endl;
		
	}
}
