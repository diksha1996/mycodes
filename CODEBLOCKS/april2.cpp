#include<iostream>
using namespace std;
int main(){
	int t;
	long long k;
	long long count[3];
	cin>>t;
	while(t--){
		for(int i=0;i<3;i++){
			cin>>count[i];
		}
		cin>>k;
	if(count[0]>count[1])
{
	long long temp;
	temp=count[0];
	count[0]=count[1];
	count[1]=temp;
}
	if(count[1]>count[2])
{
	long long temp;
	temp=count[1];
	count[1]=count[2];
	count[2]=temp;
}
	if(count[0]>count[1])
{
	long long temp;
	temp=count[0];
	count[0]=count[1];
	count[1]=temp;
}
if(k<=count[0])
cout<<(3*k-2)<<endl;
else if(k<=count[1])
cout<<(count[0]+2*k-1)<<endl;
else
cout<<(count[0]+count[1]+k)<<endl;
	}
	}
