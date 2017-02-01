#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;
int minKey(int key[], int set[],int n)
{
   int min = INT_MAX, min_index;
   for (int i = 0; i < n; i++)
     if (set[i] == 0 && key[i] < min)
        {min = key[i];
		min_index = i;
	}
   return min_index;
}
int print(int parent[], int n, int g[100][100])
{cout<<"edges and corresponding weights MST:"<<endl;
   for (int i = 1; i < n; i++)
      cout<<parent[i]<<"--"<<i<<" "<< g[i][parent[i]]<<endl;
}
int main(){
	int n;
	cout<<"enter order n"<<endl;
	cin>>n;
	int g[100][100];
	cout<<"enter adjacency matrix"<<endl;	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>g[i][j];
		}
	}
	int key[n];
	int parent[n];
	int set[n];
	for(int i=0;i<n;i++){
		key[i]=INT_MAX;
		set[i]=0;
	}
	key[0]=0;
parent[0]=-1;
for (int i = 0; i < n-1; i++)
     {
        int u = minKey(key,set,n);
        set[u] = 1;
        for (int v = 0; v < n; v++)
          if (g[u][v] && set[v] == 0 && g[u][v] <  key[v])
             parent[v]  = u, key[v] = g[u][v];
     }
     print(parent, n, g);
}
