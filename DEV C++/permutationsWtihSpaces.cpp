#include<iostream>
#include<cstring>
using namespace std;
void perm(string s,char* res,int a,int b,int n){
	if(a==n)
	{   res[b]='\0';
		cout<<res<<endl;
		 return;
	}
	else{
				res[b]='_';
				res[b+1]=s[a];
				perm(s,res,a+1,b+2,n);
		    	res[b]=s[a];
			    perm(s,res,a+1,b+1,n);
		}
	
}
int main(){
	string s;
	cin>>s;
	int n = s.length();
	char res[2*n-1];
	res[0]=s[0];
	perm(s,res,1,1,n);
}
