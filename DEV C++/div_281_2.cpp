#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,temp,sf=0,ss=0,i=0,j=0;
	cin>>n;
	int f[n],s[n];
	while(n--){
		cin>>temp;
		if(temp>0)
		{
			sf+=temp;
			f[i]=temp;
			i++;	
		}
		else
		{
			ss+=(-temp);
			s[j]=(-temp);
			j++;
		}
	}
	if(sf>ss)
	cout<<"first"<<endl;
	else if(ss>sf)
	cout<<"second"<<endl;
	else
	{	int x = min(i,j);
		int k;
		for(k=0;k<x;k++){
			if(f[k]>s[k])
			{
			cout<<"first"<<endl;
			break;	
			}
			else if(f[k]<s[k])
			{
			cout<<"second"<<endl;
			break;	
			}
		}
		if(k==x){
			if(i==j){
				if(temp>0)
				cout<<"first"<<endl;
				else
				cout<<"second"<<endl;
			}
			else
			{
			if(i>j)
				cout<<"first"<<endl;
				else
				cout<<"second"<<endl;
			}
		}
	}
}
