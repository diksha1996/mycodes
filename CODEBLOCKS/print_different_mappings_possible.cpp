#include<iostream>
using namespace std;
char hash[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
void fun(int *arr,int n,char *s,int a,int b){
	if(a==n)
	{
		s[b]='\0';
		cout<<s<<endl;
	//	clear(s);
		return;
	}
	if(arr[a]>2||(arr[a]==2&&arr[a+1]>6))
	{
		s[b]=hash[arr[a]-1];
		fun(arr,n,s,a+1,b+1);
	}
	else
	{
		s[b]=hash[arr[a]-1];
		fun(arr,n,s,a+1,b+1);
		int temp = arr[a]*10+arr[a+1];
		s[b]=hash[temp-1];
		fun(arr,n,s,a+2,b+1);
	}
	
}
int main(){
	long long n,k;
	cin>>n;
	k=n;
	int arr[20];
	int count=0;
	while(n!=0)
	{
		n = n/10;
		count++;
	}
	n=count;
	while(k!=0)
	{
		arr[count-1]=k%10;
		k = k/10;
		count--;
	}
	char s[n+1];
	fun(arr,n,s,0,0);
}
