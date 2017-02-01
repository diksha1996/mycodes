#include<iostream>
using namespace std;
int LCS(char x[],int i,int m,char y[],int j,int n){
	if(i==m||j==n)
	return 0;
	else if(x[i]==y[j])
	return (1+LCS(x,i+1,m,y,j+1,n));
	else
	return max(LCS(x,i,m,y,j+1,n),LCS(x,i+1,m,y,j,n));
}
int main(){
	char x[]="abcbdab";
	char y[]="bdcaba";
	cout<<LCS(x,0,7,y,0,6);
}
