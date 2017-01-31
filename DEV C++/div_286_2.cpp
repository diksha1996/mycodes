#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
char ans[12]; 
int main(){
	char s[11];
	cin>>s;
	int n=strlen(s);
	int l = n/2,i,j,k;
	for(i=0;i<l;i++){
		if(s[i]!=s[n-1-i])
		break;
	}
	if(i==l)
	{
		for(i=0;i<n;i++){
			if(i!=l)
			cout<<s[i];
			else
			{
				cout<<s[l];
				cout<<s[i];
			}
		}
	}
	else
	{   char t[n-1];
		for(i=0;i<n;i++){
			j=0;
			k=0;
			while(j<n-1){
				if(k!=i)
				{
					t[n-2-j]=s[k];
					j++;
				}
				k++;
			}
			j=0;
			//cout<<"i="<<i<<endl;
			for(k=0;k<n;k++){
				if(k!=i)
				{
				  if(s[k]!=t[j])
				  break;
				  else
				  j++;	
				}
			}
			if(k==n)
			break;
		}
		//cout<<"i="<<i<<endl;
		if(i==n)
		cout<<"NA"<<endl;
		else
		{ 
		int in=i;
		j=0;
		if(in<n/2)
		{
			//ans[in]=s[in];
			ans[n-in]=s[in];
			for(i=0;i<=n;i++){
			if(i!=(n-in))
			{
				ans[i]=s[j];
				j++;	
			}
		}
		}
		else
		{	j=0;
			ans[n-in-1]=s[in];
			//ans[in+1]=s[in];
			for(i=0;i<=n;i++){
			if(i!=(n-in-1))
			{
				ans[i]=s[j];
				j++;	
			}
		}
		}
		
		cout<<ans<<endl;
		}
	}
}
