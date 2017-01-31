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
	int n,one=0,two=0,w,s,flag;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1)
		one++;
		else
		two++;
	}
	if(one==two)
	cout<<"0"<<endl;
	else
	{
		int t=max(one,two);
		if(one>two)
		w=1;
		else
		w=2;
		for(int i=1;i<=t;i++){
			s=i;
			for(int j=1;j<=t;j++){
				one=0;
				two=0;
				flag=0;
				if((i*j)<=t){
					for(int k=0;k<n;k++){
						if(a[i]==1)
						{
							one++;
							if(one==j&&w==1)
							{
								s--;
								if(s==0)
								{
									if(k==(n-1))
									{
										flag=1;
									}
									break;
								}
							}
							else if(one==j)
							{
								one=0;two=0;
							}
						}
						else
						{
							two++;
							if(two==j&&w==2)
							{
								s--;
								if(s==0)
								{
									if(k==(n-1))
									{
										flag=1;
									}
										break;
								}
							}
							else if(two==j)
							{
								one=0;two=0;
							}
						}
					}
				}
				cout<<"flag= "<<flag<<endl;
				if(flag==1)
				cout<<i<<" "<<j<<endl;
			}
		}
	}
}
