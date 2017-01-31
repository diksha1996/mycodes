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
	int n;
	cin>>n;
	int a = n/10;
	int b = n%10;
	int x[10]={2,7,2,3,3,4,2,5,1,2};
	int ans = x[a]*x[b];
	cout<<ans;
}
