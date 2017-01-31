#include<iostream>
using namespace std;
int main(){
	int t,n,count;
	cin>>t;
	while(t--){
		cin>>n;
		count=0;
		int arr[n],vis[n],magic[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
			for(int k=0;k<n;k++)
			   {vis[k]=0;
			    magic[k]=0;
			   }
			int j;
			count=0;
			for(int i=0;i<n;i++){
			if(vis[i]==0){
				j=i;
			while(1){
				if(vis[j]==1)
				{
					if(magic[j])
					break;
					else{
						magic[j]=1;
						count++;
						j=(j+arr[j]+1)%n;
					}	
				}
				else{
					vis[j]=1;
					j=(j+arr[j]+1)%n;
				}
		}
	}
	}
		cout<<count<<endl;
	}
}
