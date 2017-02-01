#include <bits/stdc++.h>
#define ll long long
#define maxn 100005
#define slld(t) scanf("%lld",&t)
#define sd(t) scanf("%d",&t)
#define pd(t) printf("%d\n",t)
#define plld(t) printf("%lld\n",t)
#define foll(i,n) for(long long i=0;i<n;i++)
#define fo(i,n) for(int i=0;i<n;i++)
#define PI 3.14159265
int arr[10000][10000];
using namespace std;
int solve(int i,int j,int r,int c){
	int max = INT_MIN;
	int sum=0;
	for(int p=i;p<i+r;p++){
		for(int q=j;q<j+c;q++){
			if(arr[p][q]>max)
			max=arr[p][q];
		}
	}
	//cout<<max<<endl;
	for(int p=i;p<i+r;p++){
		for(int q=j;q<j+c;q++){
			sum = sum+(max-arr[p][q]);
		}
	}
//	cout<<sum<<endl;
	return sum;
}
int main(){
	int n,m,q,r,c,min,sum;
	cin>>n>>m;
	fo(i,n){
		fo(j,m){
			cin>>arr[i][j];
		}
	}
	cin>>q;
	while(q--){
		min = INT_MAX;
		cin>>r>>c;
		if(r==1&&c==1){
			min=0;
		}
		else{
			fo(i,n-r+1){
				fo(j,m-c+1){
					//cout<<i<<" "<<j<<endl;
					sum=solve(i,j,r,c);
					if(sum<min)
					min = sum;
				}
			}
		}
		cout<<min<<endl;
	}
}
