#include<iostream>
using namespace std;
int main(){
	int n,max;
	long long sum=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
			for(int i=0;i<n-1;i++){
				max=arr[i];
					for(int j=i+1;j<n;j++){
						if(arr[j]>max)
						max=arr[j];
						if(((arr[i]&arr[j])==arr[i])||((arr[i]&arr[j])==arr[j]))
						{
							//f[i][j]=1;
							//cout<<max<<endl;
							sum+=max;
						}
					}
			}
			cout<<sum<<endl;
			
}
