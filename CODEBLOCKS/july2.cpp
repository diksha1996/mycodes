#include<bits/stdc++.h>
# define ll long long
using namespace std;
int minm(ll *a,int n){
	ll  min = INT_MAX;
	int minIndex;
	for(int i=0;i<n;i++){
		if(a[i]<min)
		{
		min=a[i];
		minIndex = i;
	}
	}
	a[minIndex]=INT_MAX;
	return minIndex;
}
int binarySearch(ll arr[], int n, ll x)
{int i;
  for(i=0;i<n;i++)
{
if(arr[i]==x)
break;	
}
return i;
}
int main(){
	int t,n,noz;
	ll sum;
	cin>>t;
	while(t--){
		noz=0;
		sum=0;
		cin>>n;
		ll x[n],d[n-1],d2[n-1];
		string arr;
		int con[n];
		cin>>arr;
		for(int i=0;i<n;i++){
			if(arr[i]=='0')
			noz++;
			con[i]=0;
		}
		for(int i=0;i<n;i++){
			cin>>x[i];
			if(i>0)
			d[i-1]=x[i]-x[i-1];
			d2[i-1]=x[i]-x[i-1];
		}
		
	//	sort(d2,d2+n-1);
		int i=0;
	while(noz>0&&i<n-1){
			int min = minm(d2,n-1);
		//	cout<<min<<" "<<noz<<endl;
			i++;
			if(arr[min]=='1'&&arr[min+1]=='0')
			{
				sum+=d[min];
				arr[min+1]='1';
				noz--;
			//	cout<<con[min+1]<<endl;
				while(con[min+1]==1&&min<n-2)
			{	arr[min+2]='1';
			    min++;
			    noz--;
			}
				
			}
			else if(arr[min]=='0'&&arr[min+1]=='1')
			{
				sum+=d[min];
				arr[min]='0';
				noz--;
			//	cout<<con[min-1]<<endl;
				while(con[min-1]==1&&min>0)
			{	arr[min-1]='1';
			    min--;
			    noz--;
			}
				
			}
			else if(arr[min]=='0'&&arr[min+1]=='0')
			{
				sum+=d[min];
				con[min]=1;
			}
			
		}
		cout<<sum<<endl;	
	}
	
}
