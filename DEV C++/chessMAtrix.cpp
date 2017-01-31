#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
using namespace std;
int n,mo,si,sj,di,dj,nsi,nsj;
ll c;
int dx[]={0, 1, 0, 1, -1, -1, 1, -1, 1, 1, -1, -1, 2, 2, -2, -2};
int dy[]={1, 1, -1, 0, 0, -1, -1, 1, -2, 2, 2, -2,-1, 1, -1, 1};
void fun(int m,int si1,int sj1){
	if(m==0)
	return;
	else{
		for(int i=0;i<16;i++){
			nsi=si1+dx[i];
			nsj=sj1+dy[i];
			if(nsi>=0&&nsi<n&&nsj>=0&&nsj<n){
			if(nsi==di&&nsj==dj&&m==1)
			c+=1;
			else
			fun(m-1,nsi,nsj);	
		}
	}
	}
}
int main(){
	cin>>n>>mo>>si>>sj>>di>>dj;
	fun(mo,si,sj);
	cout<<c<<endl;
}
