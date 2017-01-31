#include<iostream>
using namespace std;
int main(){
	int n, flag=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++){
		if(a[i]%2==1){
			if(flag==0)
			flag=1;
			else
			flag=0;
		}
		else if(a[i]==0)
		{
			if(flag==1)
			break;
		}
	}
	if(flag==1)
	cout<<"NO"<<endl;
	else
	cout<<"YES"<<endl;
}
