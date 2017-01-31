#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int flag=0;
	while(n--){
		string s;
		int bf,af;
		cin>>s>>bf>>af;
		if(bf>=2400&&af>bf)
		{
			flag=1;
		}
	}
	if(flag==1)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
