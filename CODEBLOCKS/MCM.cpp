//MATRIX CHAIN MULTIPLICATION
#include<iostream>
#include<limits.h>
using namespace std;
char var[256];
void print(int *cut,int s,int d,int n){
	if(s==d)
	cout<<var[s];
	else if((d-s)==1)
	{
			cout<<"("<<var[s]<<var[d]<<")";
	}
	else{
	int k = *(cut+s*(n+1)+d);
	cout<<"(";
	print((int *)cut,s,k,n);
	print((int *)cut,k+1,d,n);
	cout<<")";
}
}
int main(){
	int n;
	cout<<"Enter no of matrices\n\n";
	cin>>n;
	int arr[n+1];
	int mat[n+1][n+1];
	int cut[n+1][n+1];
	cout<<"\n\nEnter the variables used ::\n\n";
	for(int i=1;i<=n;i++){
		cin>>var[i];
	}
	cout<<"\n\nEnter their order\n\n";
	for(int i=0;i<=n;i++){
		cin>>arr[i];
	}
		for(int i=1;i<=n;i++){
		mat[i][i]=0;
		cut[i][i]=0;
	}
	int min;
	for(int l=2;l<=n;l++){
		for(int i=1;i<=n-l+1;i++){
			int j=i+l-1;
			min=INT_MAX;
			for(int k=i;k<j;k++){
				int temp = mat[i][k]+mat[k+1][j]+(arr[i-1]*arr[k]*arr[j]);
				if(temp<min)
				{min=temp;
				cut[i][j] = k;
			}
			}
			mat[i][j]=min;
		}
	}
	cout<<"\n\nMINIMUM NO. OF MULTIPLICATIONS REQUIRED ARE:: "<<mat[1][n]<<endl;
	print((int *)cut,1,n,n);
}
