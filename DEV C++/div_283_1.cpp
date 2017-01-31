#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,max,temp,min;
	cin>>n;
	int a[n],b[n-1];
	for(i=0;i<n;i++){
		cin>>a[i];	
	}
	max=INT_MIN;
	for(i=0;i<n-1;i++){
		temp=a[i+1]-a[i];
		b[i]=temp;
		if(temp>max)
		max = temp;
	}
	min=INT_MAX;
	for(i=0;i<n-2;i++){
		temp = b[i]+b[i+1];
		if(temp<min)
		min = temp;
	}
	if(min>max)
	max=min;
	cout<<max<<endl;
}
