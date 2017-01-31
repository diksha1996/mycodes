#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 
using namespace std;
int r[51];
int main(){
	int n,m,t,i,j,fr;
	cin>>t;
	while(t--){
		fr=0;
		cin>>n>>m;
		char mat[n][m];
		int ld[n][m];
		for(i=0;i<n;i++){
			fr=0;
			for(j=0;j<m;j++){
				cin>>mat[i][j];
				ld[i][j]=0;
				if(mat[i][j]=='L')
					fr=1;
			}
			if(fr==0)
				r[i]=1;
			//	cout<<r[i]<<" ";
		}
			for(i=n-2;i>=0;i--){
			for(j=0;j<m;j++){
				if(ld[i+1][j]==1||mat[i+1][j]=='L')
				{
					ld[i][j]=1;
				}
			}
		}
	//	cout<<endl;
		int ans=0;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(mat[i][j]=='E') 
				{
					if(r[i]==1&&ld[i][j]==0)
					{
						ans=1;
						break;
					}
				}
			}
			//cout<<i<<" "<<j<<" "<<ans<<endl;
			if(ans==1)
			break;
		}
		if(ans==0)
		cout<<"Possible"<<endl;
		else
		cout<<"Impossible"<<endl;
		memset(r,0,51);
	}
}
