#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,c;
	char zero, one;
	int count_a=0,count_b=0;
	cin>>n>>c;
	string s;
	cin>>s;
	for(int i=0;i<n;i++){
		if(s[i]=='a')
		count_a++;
		else
		count_b++;
	}
	if(count_a>count_b)
	{zero = 'b';
	one = 'a';
    }
    else{
	zero = 'a';
	one = 'b';
    }
int l =0,r=0;
int k = c;
int temp,max=0;
while(l<n-max){
	if(s[r]==zero&&k>0)
	{
	k--;
	r++;	
	}
	else if(s[r]==one)
	r++;
	else
	{
	   temp = r-l;
	   l++;
	   r=l;
	   k=c;
	   if(temp>max)
	   max=temp;
	}
}
cout<<max;
	
}
