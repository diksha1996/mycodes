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
	int t;
	ll ans,a,b,c,d;
	cin>>t;
	while(t--){
		ans=0;
		cin>>a>>b>>c>>d;
		if(b<c)
		ans = (b-a+1)*(d-c+1);
		else if(d<a)
		ans=0;
		else if(a<=c){
			ans = (c-a)*(d-c+1);
			if(d<b)
			{
				for(int i=0;i<d-c+1;i++)
			    ans+=d-c-i;
			}
			else
			{
			for(int i=0;i<b-c+1;i++)
			    ans+=d-c-i;	
			}
			
		}
		else if(a>c){
			ans=0;
			if(b<d){
				for(int i=0;i<b-a+1;i++)
			    ans+=d-a-i;
			}
			else
			{
				for(int i=0;i<d-a+1;i++)
			    ans+=d-a-i;
			}
		}
		cout<<ans<<endl;
		
	}
}
