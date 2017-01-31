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
	int t,n,k,i,j;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n],hash[n];
		memset(a,0,n);
		memset(hash,0,n);
		i=1;
		while(i<=k)
		{
				a[n-i-k]=n-i+1;
				hash[n-i]=1;
		     	i++;
		}
		i=1;
		while(i<=k){
			if(a[i-1]==0&&hash[i+k-1]==0)
			{
			a[i-1]=i+k;
			hash[i+k-1]=1;
			i++;
			}
			else
			break;
		}
		i=0;j=0;
		for(i=0;i<n;i++){
			if(hash[i]==0)
			break;
		}
		for(j=0;j<n;j++){
			if(a[j]==0)
			{
				a[j]=i+1;
			for(i;i<n;i++){
			if(hash[i]==0)
			break;
		}
			}
		}
		for(int m=0;m<n;m++)
		cout<<a[m]<<" ";
		cout<<endl;
	}
}
