#include<iostream>
using namespace std;
int main(){
	int n,m,a,b,count,t,onedeg;
	cin>>t;
	while(t--){
		count=0;
		onedeg=0;
		cin>>n>>m;
		int deg[n];
		for(int i=0;i<n;i++)
		{
			deg[i]=0;
		}
		for(int i=0;i<m;i++){
			cin>>a>>b;
			deg[a-1]++;
			deg[b-1]++;
		}
		int hash[n-1];
		for(int i=0;i<n-1;i++)
		{
			hash[i]=0;
		}
		for(int i=0;i<n;i++){
			hash[deg[i]] = 1;
			if(deg[i]==1)
			onedeg++;
		}
		for(int i=0;i<n-1;i++){
			if(hash[i]==1)
			count++;
		}
		if(count>=5||onedeg>=3)
		cout<<"NO"<<endl;
		else
		{
			
	}
}
