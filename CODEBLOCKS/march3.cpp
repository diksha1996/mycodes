#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int even(char *s){
	int temp =0;
	int j=strlen(s)/2 - 1;
	int i=strlen(s)-1;
	while(j>=0){
		if(s[j]==s[i])
		{
			i--;
			j--;
		}
		else{
			temp=1;
			break;
		}
	}
	if(temp==0)
	return 1;
	else 
	return 2;
}
int main(){
	int d;
	cin>>d;
	char s[1000001];
	int hash[26],count,key;
	int flag;
	for(int i=0;i<d;i++){
		flag=0;
		cin>>s;
		if(strlen(s)%2==0)
		{
		flag=even(s);
		}
		else if(strlen(s)==1)
		flag=2;
		else{count=0;
				for(int j=0;j<26;j++){
				hash[i]=0;
			}
			for(int j=0;j<strlen(s);j++){
				hash[s[i]-97]++;
			}
			for(int j=0;j<26;j++){
				if(hash[j]%2!=0)
				{count++;
				key=j;
			}
			}
			if(count>1)
			flag=0;
			else{int skip=0;
				int k,l,mid;
				mid=l=strlen(s)/2;
				k=0;
				while(l<strlen(s)){
					if(s[k]==s[l])
					{
						k++;
						l++;
						flag=1;
					}
					else if(s[k]!=s[l]&&s[k]==s[l+1]&&skip==0&&s[l]==(char)(key+97))
					{skip=1;
						l++;
						flag=1;
					}
					else if(s[k]!=s[l]&&s[k+1]==s[l]&&skip==0&&s[k]==(char)(key+97))
					{
						skip=1;
						k++;
						flag=1;
					}
					
					else
					{flag=2;
					break;}
				}
			}
		}
		if(flag==1)
		cout<<"YES"<<"\n";
		else
		cout<<"NO"<<"\n";
	}
}
