#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cout<<"enter no. of files"<<endl;
	cin>>n;
	int rec[n];
	cout<<"enter no. of records in each file"<<endl;
	for(int i=0;i<n;i++){
		cin>>rec[i];
	}
	int sum=0;
	int i=0;
	while(i<(n-1)){
		std::sort(rec+i,rec+n);
		sum+=(rec[i]+rec[i+1]);
		rec[i+1]=rec[i]+rec[i+1];
		i++;
	}
	cout<<"min. no of transitions: "<<sum<<endl;
}
