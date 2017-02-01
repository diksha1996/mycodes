#include<iostream>
using namespace std;
int mincost=0,cost[9][9],parent[9];
int find(int);
int uni(int,int);
int main()
{int i,j,k,a,b,u,v,n,edge=1;
 cout<<"Enter the no. of vertices\n";
 cin>>n;
 cout<<"Enter the cost adjacency matrix\n";
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  {
   cin>>cost[i][j];
   if(cost[i][j]==0)
    cost[i][j]=999;
  }
 }
 cout<<"The edges of Minimum Cost Spanning Tree are\n";
 while(edge<n)
 {int min=999;
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   {
    if(cost[i][j]<min)
    {
     min=cost[i][j];
     a=u=i;
     b=v=j;
    }
   }
  }
  u=find(u);
  v=find(v);
  if(uni(u,v))
  {
   cout<<(edge++)<<"::"<<a<<"--"<<b<<"="<<min<<endl;
   mincost +=min;
  }
  cost[a][b]=cost[b][a]=999;
 }
 cout<<"Minimum cost = "<<mincost;
}
int find(int i)
{
 while(parent[i])
  i=parent[i];
 return i;
}
int uni(int i,int j)
{
 if(i!=j)
 {
  parent[j]=i;
  return 1;
 }
 return 0;
}
