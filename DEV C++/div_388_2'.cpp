#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
int main()
{
	float x1,x2,x3,y1,y2,y3;
	//int arr[3][2];
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>x3>>y3;
	cout<<"3"<<endl;
	cout<<(x1+x2-x3)<<" "<<(y1+y2-y3)<<endl;
	cout<<(x1+x3-x2)<<" "<<(y1+y3-y2)<<endl;
	cout<<(x3+x2-x1)<<" "<<(y3+y2-y1)<<endl;
}
