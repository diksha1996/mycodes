#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long int m,n;
	while(t--){
	cin>>n>>m;
	if(n==1&&m==1)
	cout<<"No"<<endl;
	else if((n==1&&m>2)||(m==1&&n>2))
	cout<<"No"<<endl;
	else if(n%2==0||m%2==0)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
}
}
