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
	string s;
	cin>>s;
	int x=0,count=0,i,y=0;
	int n = s.length();
	int ans[n],m;
	for(i=0;i<n;i++){
		if(s[i]==')')
	    {
			x--;
			y--;
			if(x<0||y<0)
			{
				cout<<"-1"<<endl;
				break;
			}
     	}
		else if(s[i]=='(')
		{
			x++;
			y++;
		}
		else{
			count++;
			y--;
			if(count>x||y<0)
			{
				cout<<"-1"<<endl;
				break;
			}
		}
	}
	if(i==n)
	{
	if(s[0]==')'||s[n-1]=='('||s[0]=='#')
	cout<<"-1"<<endl;
	else if(x==0||x<0)
	cout<<"-1"<<endl;
	else
	{
			if(count>x)
				{
					cout<<"-1"<<endl;	
				}
				else{
				//	cout<<"else"<<endl;
					int j=0;
					while(count>1){
					ans[j]=1;
					j++;
					x--;
					count--;
				}
				ans[j]=x;
				x=0;
				j++;
				int z=0;
				for(int k=n-1;k>=0;k--){
					if(s[k]==')')
					z--;
					else if(s[k]=='(')
					z++;
					else
					break;
					
				}
				if(z>0)
				cout<<"-1"<<endl;
				else{
				for(int k=0;k<j;k++){
				cout<<ans[k]<<endl;
			}}			
	}
}
}
}
