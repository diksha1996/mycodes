#include<bits/stdc++.h>
using namespace std;
int power(int x,int y)
{
    if( y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    else
        return x*power(x, y/2)*power(x, y/2);
 
}
int main(){
	string s;
	cin>>s;
	string p;
	for(int i='0';i<='9';i++){
		p.push_back(i);
	}
	for(char i='A';i<='Z';i++){
		p.push_back(i);
	}
	for(char i='a';i<='z';i++){
		p.push_back(i);
	}
	p.push_back('-');
	p.push_back('_');
	int val[100000];
	for(int i=0;i<64;i++){
		val[p[i]]=i;
	}
	long long ans=1;
	for(int i=0;i<s.length();i++){
		int temp=val[s[i]];
		for(int j=0;j<6;j++){
			if((temp&power(2,j))==0)
			{
			ans=(ans*3)%(1000000007);
		}
		}
	}
	cout<<ans;
}
