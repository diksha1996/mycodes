#include<bits/stdc++.h>
using namespace std;
int h1[100001];
int main()
{
	long long n,x,count=0,temp,p;
	cin>>n>>x;
	int a[100001];
	for(int i=0;i<n;i++){
		cin>>a[i];
		h1[a[i]] = h1[a[i]] + 1;
	}
	if(x==0){
		for(int i=0;i<n;i++){
			count = count + h1[a[i]] - 1;
		}	
	}
	else{
	for(int i=0;i<n;i++){
		p=a[i];
	 temp = (p ^ x);
	 if(temp<100001)
    	count = count + h1[temp];
	}
}
    long long ans = count/2;
	cout<<ans<<endl;
	return 0;
}
