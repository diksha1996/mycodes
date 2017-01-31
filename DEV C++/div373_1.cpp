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
	int n,flag=-1;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	if(a[n-1]==0)
	flag=1;
	else if(a[n-1]==15)
	flag=0;
	else if((a[n-2]-a[n-1])>0&&n>=2)
	flag=0;
	else if((a[n-2]-a[n-1])<0&&n>=2)
	flag=1;
	else
	flag=-1;
	
	if(flag==0)
	cout<<"DOWN"<<endl;
	else if(flag==1)
	cout<<"UP"<<endl;
	else
	cout<<"-1"<<endl;
	
	
}
