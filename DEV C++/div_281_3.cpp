#include<bits/stdc++.h>
using namespace std;
int as,bs;
void fun(int *a,int *b,int n,int m,int d){
	as=0;
	bs=0;
	for(int i=0;i<n;i++){
		if(a[i]>d)
		as+=3;
		else
		as+=2;
	}
	for(int i=0;i<m;i++){
		if(b[i]>d)
		bs+=3;
		else
		bs+=2;
	}
}
int bs1(int *b,int s,int e,int x,int n)
{
	int m = (s+e)/2;
	if(b[m]==x){
		if((m-1)<0)
		return (-1);
		if(b[m-1]==x&&(m-1)>=0)
			bs1(b,s,m-1,x,n);
			else if(b[m-1]<x)
			return (m-1);
		}
	else if(b[m]>x){
		if((m-1)<0)
		return (-1);
		if(b[m-1]<x)
		return (m-1);
		else
		bs1(b,s,m-1,x,n);
	}
	else
	{
		if((m+1)>=n)
		return m;
		if(b[m+1]>x)
		return m;
		else
		bs1(b,m+1,e,x,n);
	}
}
int main(){
	int n,m,i,amax,amin,bmax,bmin,at,bt;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>m;
	int b[m];
	for(i=0;i<m;i++)
	cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);
	fun(a,b,n,m,0);
	at=as;
	bt=bs;
	 for(int k=0;k<n;k++){
	   i=bs1(b,0,m-1,a[k],m);
	  // cout<<"i="<<i<<endl;
	   as = (n-k)*3 + k*2;
	   bs = (m-i-1)*3 + (i+1)*2;
	   if((as-bs)>(at-bt)){
	   	at=as;
	   	bt=bs;
	   }
	   else if((as-bs)==(at-bt)){
	   	if(as>at){
	   		at=as;
	   		bt=bs;
	   	}
	   }
	 }
	 i=bs1(b,0,m-1,b[m-1]+1,m);
	  // cout<<"i="<<i<<endl;
	   as = n*2;
	   bs = (m-i-1)*3 + (i+1)*2;
	   if((as-bs)>(at-bt)){
	   	at=as;
	   	bt=bs;
	   }
	   else if((as-bs)==(at-bt)){
	   	if(as>at){
	   		at=as;
	   		bt=bs;
	   	}
	   }
	 cout<<at<<":"<<bt<<endl;
}
