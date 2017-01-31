#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long

using namespace std;
int main(){
	int n,t,x,y,z,ans,min;
	cin>>t;
	while(t--){
	min=-1;
	ans=-1;
	cin>>n;
	int a[n],p[n],s[n];
	for(int i=0;i<n;i++)
	{cin>>a[i];
	 p[i]=0;
	 s[i]=0;
	}
	
	if(n<=3)
	{
		if(n==1)
		ans=0;
		else if(n==2){
			ans = (a[0]<a[1])?0:1;
		}
		else{
			ans = (a[0]<a[1])?0:1;
			ans = (a[ans]<a[2])?ans:2;
		}
	}
	else{
	p[0]=1;p[1]=1;p[2]=1;
	for(int i=3;i<n;i++)
	p[i]=(p[i-1]&&((a[i-1]-a[i-2])==(a[i-2]-a[i-3])));
	s[n-1]=1;s[n-2]=1;s[n-3]=1;
	for(int i=n-4;i>=0;i--)
	s[i]=(s[i+1]&&((a[i+1]-a[i+2])==(a[i+2]-a[i+3])));
	for(int i=0;i<n;i++)
	{
	   if(p[i]&&s[i]){
	   	if(i==0)
	   	min=i;
	   	else if(i==1){
	   	 y=a[i+1]-a[i-1];
	   	 z=a[i+2]-a[i+1];
	   	 if(y==z&&(min<0||a[min]>a[i]))
	   	 min=i; 
	   	}
	   	else if(i==n-1&&(min<0||a[min]>a[i]))
	   	min=i;
	   	else if(i==n-2)
		   {
		     x=a[i-1]-a[i-2];
	   	     y=a[i+1]-a[i-1];
	   	     if(x==y&&(min<0||a[min]>a[i]))
	   	     min=i;
		   }
	   	else{	
	   	 x=a[i-1]-a[i-2];
	   	 y=a[i+1]-a[i-1];
	   	 z=a[i+2]-a[i+1];
	   	 if(x==y&&y==z&&(min<0||a[min]>a[i]))
	   	 min=i;
	   }
	   }	
	}
	ans=min;
}
if(ans==-1)
cout<<"-1"<<endl;
else
cout<<a[ans]<<endl;
}
	
}
