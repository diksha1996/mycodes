#include<bits/stdc++.h>
using namespace std;
int hash[10];
int main(){
	int n,t=10;
	cin>>n;
	char s[10000],s1[10000];
	cin>>s;
//	cout<<"s= "<<s<<endl;
	int f=0;
	strcpy(s1,s);
	while(t--){
		//	int temp = 10-max;
			for(int i=0;i<n;i++)
			{   
				s[i] = s[i]+1;
				if(s[i]==':')
				s[i]='0';
				//cout<<"s= "<<s<<endl;
			}
			if(strcmp(s1,s)>0)
			strcpy(s1,s);
			//cout<<"s1= "<<s1<<endl;
			for(int i=0;i<n;i++)
				{   char ch=s[n-1];;
					for(int j=n-1;j>0;j--){
						s[j]=s[j-1];
					}
					s[0]=ch;
					//cout<<"s= "<<s<<endl;
					if(strcmp(s1,s)>0)
			        strcpy(s1,s);
			        //cout<<"s1= "<<s1<<endl;
				}
	}
	cout<<s1<<endl;	
}
