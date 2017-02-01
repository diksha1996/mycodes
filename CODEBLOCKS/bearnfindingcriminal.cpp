#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a;
	cin>>n>>a;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	a=a-1;
	int i=1;
	int count=0;
	if(arr[a]==1)
	count++;
	while(1){
		if(a-i>=0&&a+i<n)
		{
			if(arr[a-i]==1&&arr[a+i]==1)
			count+=2;
			i++;
		}
	   else if(a-i>=0&&a+i>=n)
		{
			if(arr[a-i]==1)
			count+=1;
			i++;
		}
		else if(a-i<0&&a+i<n)
		{
			if(arr[a+i]==1)
			count+=1;
			i++;
		}
		else if(a-i<0&&a+i>n)
		break;
		else
		i++;
	}
	cout<<count<<endl;
}
