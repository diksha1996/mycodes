#include<bits/stdc++.h>
#include<string>
using namespace std;
int even(string s){
	    int l = s.length();
        string s1 = s.substr(0,l/2);
		string s2 = s.substr(l/2);
		if(s1.compare(s2)==0)
		return 1;
		else
		return 2;	
}
int main(){
	int d;
	int flag;
	string s;
	cin>>d;
	while(d--)
	{
	cin>>s;
	int l = s.length();
	if(l%2==0){
		flag=even(s);
	}
	else{
	int hash[256];
	int count=0,key;
	for(int i=0;i<26;i++){
		hash[i]=0;
		}
		for(int i=0;i<l;i++){
			hash[s[i]-97]++;
		}
	
		for(int j=0;j<26;j++){
			if(hash[j]%2!=0)
				{count++;
				key=j;
			}
			}
			if(count>1)
			flag=2;
			else
			{   string str;
				for(int i=0;i<l;i++){
					str=s;
					if(s[i]==(char)(key+97))
					{
						str.erase(str.begin()+i);
						flag=even(str);
						if(flag==1)
						break;
					}
					str.clear();
				}
			}
	}
	if(flag==1)
	cout<<"YES"<<endl;
	else if(flag==2)
	cout<<"NO"<<endl;	
	}
}
