//Floyd warshall's algorithm
#include<iostream>
#include<limits.h>
using namespace std;
void printPath(int i,int j,int *cut,int n){
	 if(i!=j){
	 	if((*(cut+i*n+j))==INT_MAX)
	 	cout<<"No path";
	 	else
	 	{
	 		
	 	}
	 }
}
int main(){
	int v;
	cout<<"Enter no. of vertices\n"<<endl;
	cin>>v;
	int res[v][v];
	int w[v][v];
	int cut[v][v];
	cout<<"Enter weighted matrix\n"<<endl;
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			cin>>w[i][j];
		}
	}
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			res[i][j]=w[i][j];
			cut[i][j]=INT_MAX;
		}
	}
	cout<<"\n\nShortest pair matrix is:-\n\n";
	for(int k=0;k<v;k++){
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
				if(res[i][j]>(res[i][k]+res[k][j]))
				{
					res[i][j]=res[i][k]+res[k][j];
					cut[i][j] = k;
				}
			}
		}
	}
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			cout<<res[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n\npath from vertex i to j\n\n";
		for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			if(i!=j){
		cout<<i<<" to "<<j<<endl;
		printPath(i,j,(int *)cut,v);
	}
		}
		cout<<"\n\n";
	}
	
}
