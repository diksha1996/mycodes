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
int main(){
	int n,m,q,r,c,min,sum,max,maxl,minl,sumi,maxi;
	cin>>n>>m;
	fo(i,n){
		fo(j,m){
			cin>>arr[i][j];
		}
	}
	cin>>q;
	while(q--){
		min = INT_MAX;
		max = INT_MIN;
		sum=0;
		cin>>r>>c;
		if(r==1&&c==1){
			min=0;
		}
		else{
			fo(i,r){
				fo(j,c){
					if(max<arr[i][j])
					max = arr[i][j];
					sum+=arr[i][j];
				}
			}
				sumi=sum;
				maxi=max;
			min = max*r*c - sum;
			fo(i,m-c+1){
				sum=sumi;
				max=maxi;
				cout<<"i = "<<i<<endl;
				fo(j,n-r+1){
					cout<<"j = "<<j<<endl;
					maxl=INT_MIN;
					if(i>0&&j==0){
						fo(k,r){
					sum = sum-arr[i][j+k];
					sum = sum+arr[i+c][j+k];
					if(max == arr[i+c][j+k])
					max = INT_MIN;
					if(maxl<arr[i+c][j+k])
					maxl = arr[i+c][j+k];
				    }
			    if(max<maxl)
				max = maxl;
				minl = max*r*c - sum;
				if(min>minl)
				min=minl;
				if(j==0)
				{sumi=sum;
				maxi=max;
			}
			cout<<maxi<<"\t"<<sumi<<"\t"<<max<<"\t"<<sum<<"\t"<<minl<<"\t"<<maxl<<endl;
				}
				fo(k,c){
					sum = sum-arr[i+k][j];
					sum = sum+arr[i+k][j+r];
					if(max == arr[i+k][j+r])
					max = INT_MIN;
					if(maxl<arr[i+k][j+r])
					maxl = arr[i+k][j+r];
				}
				if(max<maxl)
				max = maxl;
				minl = max*r*c - sum;
				if(min>minl)
				min=minl;
				cout<<maxi<<"\t"<<sumi<<"\t"<<max<<"\t"<<sum<<"\t"<<minl<<"\t"<<maxl<<endl;
				}
			}
		}
		cout<<min<<endl;
	}
}
