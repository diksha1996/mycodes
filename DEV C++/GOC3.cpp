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
	int m,n,k,q,a,b;
	int u=0,v=0;
	cin>>m>>n>>k;
	int mat[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			mat[i][j]=0;
		}
	}
	for(int i=0;i<k;i++){
		cin>>q;
		for(int j=0;j<q;j++){
			cin>>a>>b;
			if(mat[a-1+u][b-1+v]==0){
				mat[a-1+u][b-1+v]=i+1;
			}
			else if(j==0)
			{ 
		    	if(mat[a-1+u+1][b-1+v]==0)
				{
					mat[a-1+u+1][b-1+v]=i+1;
					u++;
				}
				else if(mat[a-1+u][b-1+v+1]==0)
				{
					mat[a-1+u][b-1+v+1]=i+1;
					v++;
				}
				else if(mat[a-1+u+1][b-1+v+1]==0){
					mat[a-1+u+1][b-1+v+1]=i+1;
					u++;
					v++;
				}
			}
			
		}
		//cout<<"done "<<q<<endl;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
