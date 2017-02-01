#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		long long A[n],B[n],D[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
			for(int i=0;i<n;i++){
			cin>>B[i];
		}

	D[0]=A[0];
	for(int i=1;i<n;i++){
	D[i]=A[i]-A[i-1];	
	}
	int count=0;
    for(int i=0;i<n;i++){
			if(D[i]>=B[i])
			count++;
	}
		cout<<count<<endl;
}
}
