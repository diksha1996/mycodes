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
	double x1,x2,y1,y2,n,a,b,c,ans=0,t1,t2;
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>n;
	while(n--){
		cin>>a>>b>>c;
		t1 = (a*x1) + (b*y1) +c;
		t2 = (a*x2) + (b*y2) +c;
		if((t1*t2)<0)
		ans++;	
	}
	cout<<ans<<endl;
}
