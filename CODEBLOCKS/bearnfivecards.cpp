#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[5];
	int s=0;
	for(int i=0;i<5;i++){
		cin>>a[i];
		s+=a[i];
	}
	int best = s;
    sort(a,a+5);
for(int i=0;i<5;i++){
	if(i+1<5&&a[i]==a[i+1]){
		best = min(best,s-2*a[i]);
		if(i+2<5&&a[i]==a[i+2])
		best = min(best,s-3*a[i]);
	}
}
cout<<best<<endl;
}
