#include<iostream>
#include<vector>
using namespace std;
vector <int> ques(50000,0);
int in=0;
int check(vector <int> &hash){
	int flag=1;
	for(int i=0;i<26;i++){
		if(hash[i]>1)
	     return 0;
	 }
	 return 1;
}
int main(){
	string s;
	int count=0,k;
	vector <int> hash(26,0);
	//int ch = 'A';
	//cout<<ch<<endl;
	cin>>s;
	int n=s.length();
	int j=0,i=26;
	if(n<26)
	k=0;
	else{
	for(int i=0;i<26;i++){
		if(s[i]!='?')
		hash[s[i]-65]++;
	}
	
	k=check(hash);
//	cout<<k<<" "<<in<<endl;
	if(k==0){
	for( i=26;i<s.length();i++){
		k=0;
		if(s[j]!='?')
		hash[s[j]-65]--;
		if(s[i]!='?')
		hash[s[i]-65]++;
		in=0;
		k=check(hash);
		//cout<<k<<" "<<in<<endl;
      	j++;
     	if(k==1)
    	break;
	}
}
}
if(k==0)
cout<<"-1"<<endl;
else
{   int cr=0;
	while(hash[cr]>0)
	cr++;
	for(int m=0;m<n;m++){
		if(s[m]=='?'&&m>=j&&m<i)
		{
			s[m]=cr+'A';
			cr++;
			while(hash[cr]>0)
			cr++;
		}
		else if(s[m]=='?')
		s[m] = 'A';
	}
	cout<<s<<endl;
}
}
