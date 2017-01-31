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
	int r,i,j,k,count=0;
	int a[100001][3];
	float ans=0;
	cin>>r;
	for(i=1;i<1000;i++){
		for(j=i;j<1000;j++){
			for(k=j;k<1000;k++){
				if((i+j-k)>0&&(i+k-j)>0&&(j+k-i)>0)
				ans = (float)((i+j-k)*(i+k-j)*(j+k-i))/(i+j+k);
				//cout<<ans<<endl;
				if(ans == (4*r*r))
				{
					a[count][0]=i;
					a[count][1]=j;
					a[count][2]=k;
					count++;
				}
			}
		}
	}
	cout<<count<<endl;
	for(i=0;i<count;i++){
		cout<<a[i][0]<<" "<<a[i][1]<<" "<<a[i][2]<<endl;
	}
}
