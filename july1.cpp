#include<iostream>
using namespace std;
int main(){
	int n,t,flag1,flag2;
	double avg,sum;
	cin>>t;
	while(t--){
		flag1=0;
		flag2=0;
		sum=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]==2)
			flag1=1;
			if(arr[i]==5)
			flag2=1;
			sum+=arr[i];
		}
		avg = sum/n;
		if(flag1==1||avg<4||flag2==0)
		cout<<"No"<<endl;
		else
		cout<<"Yes"<<endl;
	}
}
