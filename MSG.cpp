//MULTI-STAGE GRAPH PROBLEM
#include<iostream>
#include<stdio.h>
#include<limits.h>
using namespace std;
char var[256];
int in=1;
int searchI(char c,char *var,int n){
	int i;
	for( i=0;i<n;i++)
	{
		if(var[i]==c)
		break;
	}
	return i;
}
void createMatrix(int *adj,int n){
	cout<<"\n\nEnter variables used\n"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>var[i];
	}
	char x;
	char y;
	int d;
	cout<<"\n\nEnter edges and their corresponding weights like a b 10\n"<<endl;
	fflush(stdin);
	while(1){
		cin>>x;
		if(x=='0')
		break;
		cin>>y;
		scanf("%d",&d);
		int i = searchI(x,var,n);
		int j = searchI(y,var,n);
		*(adj+i*n+j)=d;
		fflush(stdin);
	}
}
int Msg(int *adj,int s,int d,int n,int *msg,int *vertex){
	
	if(msg[s]!=INT_MAX)
	return msg[s];
	
		int min = INT_MAX;
	for(int i=0;i<n;i++){
		if(*(adj+s*n+i)!=0)
		{
			min = (*(adj+s*n+i))+Msg(adj,i,d,n,msg,vertex);
		}
		if(min<msg[s])
		{
		    msg[s]=min;
		    vertex[s]=i;
	    }
	}
	return msg[s];
}
int main(){
	int n,source,destination;
	cout<<"Enter no. of vertices\n\n";
	cin>>n;
	int adj[n][n];
	int msg[n];
		
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			adj[i][j] = 0;
		}
	}
	createMatrix((int *)adj,n);
	int i,j; 
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(adj[j][i]!=0)
		    break;
		}
		if(j==n)
		{source = i;
		break;
	}
	}
	for(i=0;i<n;i++){
		for( j=0;j<n;j++){
			if(adj[i][j]!=0)
			break;
		}
		if(j==n)
		{destination = i;
		break;
	}
	}
	for(int i=0;i<n;i++){
		msg[i]=INT_MAX;
	}
	msg[destination] = 0;
	int vertex[n];
	vertex[0]=source;
	cout<<"\n\nSource is:: "<<source<<"\t\tDestination is:: "<<destination<<endl;
    cout<<"\n\nMINIMUM COST OF MSG IS:: "<<Msg((int *)adj,source,destination,n,msg,vertex)<<"\n\n"<<endl;
    cout<<"OPTIMAL PATH IS::\n\n";
	for(int i=source;i<n;){
		cout<<var[i]<<" ";
		i = vertex[i];
	}
}
