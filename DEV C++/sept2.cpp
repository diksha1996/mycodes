#include<iostream>
#include<string>
using namespace std;
int main(){
	int t,i,j,flag;
	cin>>t;
	string s;
	while(t--){
		i=0;
		flag=0;
		cin>>s;
		j = s.length()-1;
		while(i<=j){
			if((s[i]!=s[j])&&(i!=j))
			{
			    if(s[i]=='.')
				{
					s[i]=s[j];
				}
				else if(s[j]=='.')
				{
					s[j]=s[i];
				}
				else
				{
					flag = 2;
					break;
				}
			}
			else if(i==j&&s[i]=='.')
			s[i]='a';
			else{
				if(s[i]=='.'&&s[j]=='.')
				{s[i]='a';
				s[j]='a';
				}
			}
			i++;
			j--;
		}
		if(flag==2)
		cout<<"-1"<<endl;
		else
		cout<<s<<endl;
		
	}
}
