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
int print(int parent[], int n, int g[100][100],int key[],int source)
{cout<<"edges and corresponding weights in Dijkastra's tree':"<<endl;
   for (int i = 0; i < n; i++)
      cout<<parent[i]<<"--"<<i<<" "<< g[i][parent[i]]<<endl;
      cout<<"shortest path of each vertex fronm source"<<endl;
         for (int i = 0; i < n; i++)
      cout<<source<<"--"<<i<<" "<<key[i]<<endl;
}
int main(){
	int n;
	int source;
	cout<<"enter order n"<<endl;
	cin>>n;
	int g[100][100];
	cout<<"enter adjacency matrix"<<endl;	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>g[i][j];
		}
	}
	cout<<"Enter Source"<<endl;
	cin>>source;
	int key[n];
	int parent[n];
	int set[n];
	for(int i=0;i<n;i++){
		key[i]=INT_MAX;
		set[i]=0;
	}
	key[source]=0;
parent[source]=-1;
for (int i = 0; i < n-1; i++)
     {
        int u = minKey(key,set,n);
        set[u] = 1;
        for (int v = 0; v < n; v++)
          if (!set[v] && g[u][v] && key[u] != INT_MAX 
                                       && key[u]+g[u][v] < key[v])
            {key[v] = key[u] + g[u][v];
            parent[v]=u;
        }
     }
     print(parent, n, g,key,source);
}
