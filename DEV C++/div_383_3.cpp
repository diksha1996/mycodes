#include<bits/stdc++.h>
using namespace std;
int h[101];
long long gcdofnumbers(long long val1, long long val2)
{
   	long long temp;
   	if(val1 > val2)
   	{
     		temp = val1;
     		val1 = val2;
     		val2 = temp;
   	}
  	if(val2 % val1 == 0)
	{
    		return val1;
	}
  	else
	{
    		return gcdofnumbers(val2 % val1, val1);
	}
}
long long lcmofnumbers(long long num1, long long num2)
{
  	long long gcd = gcdofnumbers(num1, num2);
  	return (num1 * num2) / gcd;
}
int main()
{
	long long n,t=0,flag=0,aeq=0,timer;
	cin>>n;
	int cr[n+1],ans[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>cr[i];
		h[cr[i]]++;
		if(cr[i]!=i)
		flag=1;
	}
	for(int i=1;i<=n;i++){
		if(h[cr[i]]>1)
		{
			aeq=1;
			break;
		}
	}
	if(flag==0){
		t=1;
	}
	else if(aeq==1){
		t=-1;
	}
	else{
		int j,i,st,en;
		for(i=1;i<=n;i++){
			if(cr[i]!=i)
			break;
		}
		if(i>1){
			ans[i-1]=1;
			st = i-1;
		}
		else
		st = i;
		while(i<=n){
			t=0;
			j=i;
			timer=0;
		while(timer<=100){
				j=cr[j];
				t++;
				timer++;
				if(cr[j]==cr[i])
				break;
		}
		if(t%2==0){
			t = t/2;
		}
		if(timer>100)
		{
			t=-1;
			break;
		}
		ans[i]=t;
		//cout<<t<<" ";
		i++;
	}
	//cout<<endl;
	if(t!=-1){
	long long value=1;
	for(int m=st;m<=n;m++){
	   value = lcmofnumbers(value,ans[m]);
	   //cout<<value<<" ";
	}
	//cout<<endl;
	t = value;		
	}
}
	cout<<t<<endl;
}
