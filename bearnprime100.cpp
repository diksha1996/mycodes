#include<bits/stdc++.h>
using namespace std;
bool prime(int a){
	for(int i=2;i*i<a;i++){
		if(a%i==0)
		return false;
	}
	return true;
}
bool divide(int a){
	cout<<a<<endl;
	fflush(stdout);
	string s;
	cin>>s;
	if(s[0]=='y'||s[0]=='Y')
	return true;
	else
	return false;
	}
int main(){
	int count=0;
for(int a=2;a<=50&&count<2;a++)
      if(prime(a))
			if(divide(a)) {
				++count;
				if(a * a <= 100 && divide(a * a))
					++count;
			}
if(count<2)
cout<<"prime"<<endl;
else
cout<<"composite"<<endl;	
}
