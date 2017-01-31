#include<iostream>
using namespace std;
int main(){
	long long n,c,prev,curr,count=0;
	cin>>n>>c;
	for(long long i=0;i<n;i++){
		cin>>curr;
		if(i==0)
		{
		count=1;
		prev = curr;
	}
		else
		{
			if((curr-prev)>c)
			count=1;
			else
			count++;
		    prev = curr;	
		}
	}
	cout<<count<<endl;
	
}
