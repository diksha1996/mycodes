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
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int t1 = max((3*a/10),(a-(a*c)/250));
	int t2 = max((3*b/10),(b-(b*d)/250));
	if(t1<t2)
	cout<<"Vasya"<<endl;
	else if(t1>t2)
	cout<<"Misha"<<endl;
	else
	cout<<"Tie"<<endl;
}
