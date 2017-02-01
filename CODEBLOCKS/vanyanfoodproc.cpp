#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,h,k;
	cin>>n>>h>>k;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long c=0;
	long long time=0;
	int i=0;
	while(i<n){
	   if(c+a[i]<=h)
		  c+=a[i++];
	if(c+a[i]>h){
	if(c>=k)
		{int temp = c/k;
		c-=k*temp;
		time+=temp;
	     }
		else
		{c=0; 
		time++;	
		}
	}
}
if(c!=0){
	if(c%k==0)
	time+=c/k;
	else
	time+=(c/k +1);
}
	cout<<time;
}
