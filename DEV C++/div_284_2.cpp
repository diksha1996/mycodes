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
	int n,m;
	cin>>n>>m;
	char a[m][11],b[m][11];
	int al[m],bl[m];
    for(int i=0;i<m;i++){
		cin>>a[i]>>b[i];
		al[i]=strlen(a[i]);
		bl[i]=strlen(b[i]);		
	}
/*	for(int i=0;i<m;i++){
		cout<<al[i]<<" "<<bl[i]<<endl;
	}*/
	char in[n][11];
	char out[n][11];
	for(int i=0;i<n;i++){
		cin>>in[i];
		for(int j=0;j<m;j++){
			if(strcmp(in[i],a[j])==0)
			{
				if(al[j]<=bl[j])
				strcpy(out[i],a[j]);
				else
				strcpy(out[i],b[j]);
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<out[i]<<" ";
}
}
