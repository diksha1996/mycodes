#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 
using namespace std;
int palin(int *h,int n){
	int cnt=0,i;
	for( i=0;i<26;i++){
		if(h[i]%2!=0&&cnt==0)
		{
			cnt=1;
		}
		else if(h[i]%2!=0&&cnt==1)
		break;
	}
	//cout<<"in="<<i<<endl;
	if(i==26)
	return 1;
	else
	return 0;
}
int main(){
	string s;
	cin>>s;
	int h[26],k;
	for(int j=0;j<26;j++){
		h[j]=0;
	}
    //cout<<h[24]<<" "<<h[25]<<endl;
	for(int i=0;i<s.length();i++){
		h[s[i]-97]++;
	}
	int j=1,i;
	while(1){
		i=palin(h,s.length());
		//cout<<"i="<<i<<endl;
		if(i==1){
			if(j==1)
			cout<<"First"<<endl;
			else
			cout<<"Second"<<endl;
			break;
		}
		else
		{
			for(k=0;k<s.length();k++){
				if(h[s[k]-97]%2==0&&h[s[k]-97]!=0)
				{
					h[s[k]-97]--;
					break;
				}
			}
			if(k==s.length()){
			for(k=0;k<s.length();k++){
				if(h[s[k]-97]!=0)
				{
					h[s[k]-97]--;
					break;
				}
			}	
			}	
		}
		if(j==1)
		j=2;
		else
		j=1;
	}

}
