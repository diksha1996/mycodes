#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
int main(){
	ll n,t,i,j,m,k;
	int flag=0;
	cin>>n>>t;
	char s[n],ch='5',c;
	cin>>s;
	for(i=0;i<n;i++){
		if(s[i]=='.')
		break;
	}
	for( k=i+1;k<n;k++)
	{
		if(s[k]>=ch)
		break;
	}
	if(k<n){
	for( j=k,m=0;j>i,m<t;j--){
		if(s[j]>=ch){
			if(j==i+1)
			{   int x=j-2;
				while(s[x]=='9'&&x>=0)
				{
					s[x]='0';
				    x--;
				}
				if(x<0)
				c='1';
				else
				s[x]+=1;
				s[j-1]='\0';
				m++;
				if(x<0)
				cout<<c<<s<<endl;
				else
				cout<<s<<endl;
				flag=1;
				break;
			}
			else
			{
				s[j-1]+=1;
				m++;	
			}
		}
		else
		break;
	}
}
//cout<<flag<<endl;
	if(flag==0)
		{   if(k==n)
			cout<<s<<endl;	
			else
			{
				s[j+1]='\0';
				cout<<s<<endl;
			}
		}
	
	
}
	
