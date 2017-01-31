#include<iostream>
using namespace std;
int maxm(int *a,int n){
	int max = 0;
	for(int i=0;i<n;i++){
		if(a[i]>max)
		max=a[i];
	}
	return max;
}
int main(){
	int t,n;
	long long max;
	cin>>t;
	while(t--){
	cin>>n;
	max=-1;
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++){
		cin>>b[i];
		c[i]=0;
	}
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==1){
	max = a[0]+b[0];
	c[0]=1;
	}
	if(a[0]+b[0]==a[1]+b[1]&&n>1)
	{
		max = a[0]+b[0];
		c[0] = 1;
		c[1]=1;
	}
	if(a[0]+b[1]==a[1]+b[0]&&n>1)
	{
		max = a[0]+b[1];
		c[0] = 1;
		c[1]=1;
	}
	if(max!=-1){
	for(int i=2;i<n;i++){
		int flag=0;
	if(c[i-1]==0)
	{
		if(a[i]+b[i-1]==max)
		{
		c[i-1]=1;
		flag=1;
	    }
	}
	if(c[i]==0&&flag==0)
	{
		if(a[i]+b[i]==max)
			{
		c[i]=1;
		flag=1;
	    }
	}
	if(c[i+1]==0&&flag==0&&i<n-1)
	{
		if(a[i]+b[i+1]==max)
			{
		c[i+1]=1;
		flag=1;
	    }
	}
	if(flag==0)
	{
		max = -1;
		break;
	}	
	}
}
if(max==-1){
	for(int i=0;i<n;i++)
	    c[i]=0;
	if(a[0]+b[0]==a[1]+b[2]&&n>2)
	{
		max = a[0]+b[0];
		c[0] = 1;
		c[2]=1;
		c[1]=0;
	}
	for(int i=2;i<n;i++){
		int flag=0;
	if(c[i-1]==0)
	{
		if(a[i]+b[i-1]==max)
		{
		c[i-1]=1;
		flag=1;
	    }
	}
	if(c[i]==0&&flag==0)
	{
		if(a[i]+b[i]==max)
			{
		c[i]=1;
		flag=1;
	    }
	}
	if(c[i+1]==0&&flag==0&&i<n-1)
	{
		if(a[i]+b[i+1]==max)
			{
		c[i+1]=1;
		flag=1;
	    }
	}
	if(flag==0)
	{
		max = -1;
		break;
	}	
	}
}
	if(max==-1){
	for(int i=0;i<n;i++)
	    c[i]=0;
		max = maxm(a,n);
	//	cout<<max<<endl;
	for(int i=0;i<n;i++){
		int flag=0;
	if(a[i]==max)
	{flag=1;
	//	 cout<<"0 "<<flag<<endl;
	}
	if(c[i-1]==0&&i>0&&flag==0)
	{
		if(a[i]+b[i-1]==max)
		{
		c[i-1]=1;
		flag=1;
	    }
	  //  cout<<"1 "<<flag<<endl;
	}
	if(c[i]==0&&flag==0)
	{
		if(a[i]+b[i]==max)
			{
		c[i]=1;
		flag=1;
	    }
	   //  cout<<"2 "<<flag<<endl;
	}
	if(c[i+1]==0&&flag==0&&i<n-1)
	{
		if(a[i]+b[i+1]==max)
			{
		c[i+1]=1;
		flag=1;
	    }
	    // cout<<"3 "<<flag<<endl;
	}
	if(c[i-1]==0&&c[i]==0&&i>0&&flag==0)
	{
		if(a[i]+b[i-1]+b[i]==max)
		{
		c[i-1]=1;
		c[i]=1;
		flag=1;
	    }
	    // cout<<"4 "<<flag<<endl;
	}
	if(c[i]==0&&c[i+1]==0&&flag==0)
	{
		if(a[i]+b[i]+b[i+1]==max)
			{
		c[i]=1;
		c[i+1]=1;
		flag=1;
	    }
	   //  cout<<"5 "<<flag<<endl;
	}
	if(c[i+1]==0&&c[i-1]==0&&flag==0&&i<n-1&&i>0)
	{
		if(a[i]+b[i+1]+b[i-1]==max)
			{
		c[i+1]=1;
		c[i-1]=1;
		flag=1;
	    }
	    // cout<<"6 "<<flag<<endl;
	}
	if(c[i+1]==0&&c[i-1]==0&&c[i]==0&&flag==0&&i<n-1&&i>0)
	{
		if(a[i]+b[i+1]+b[i-1]+b[i]==max)
			{
		c[i+1]=1;
		c[i-1]=1;
		c[i]=1;
		flag=1;
	    }
	    // cout<<"7 "<<flag<<endl;
	}
	if(flag==0)
	{
		max = -1;
		break;
		// cout<<"8 "<<flag<<endl;
	}	
	}	
	}
	if(max!=-1){
	int count=0;
	for(int i=0;i<n;i++){
		if(c[i]==0)
		count++;
	}
	if(count>0)
	max=-1;
    }
	cout<<max<<endl;	
	}
}
