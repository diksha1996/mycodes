#include<iostream>
using namespace std;
int main(){
	string s;
	int m;
	cin>>s;
	cin>>m;
	int i=0,j=0,count=0,leftIndex,max=0;
	while(j<s.length())
	{
		if(count<=m){
			if(s[j]=='0')
			count++;
			j++;
		}
		if(count>m){
			if(s[i]=='0')
			{
				count--;
			}
			i++;
		}
		if(j-i>max)
		{
			max = j-i;
			leftIndex = i;
		}
	}
	
	cout<<max<<" start from:: "<<leftIndex;
}
