//Algorithm for optimal cost Binary Search tree
#include<iostream>
#include<limits.h>
#include<stdlib.h>
using namespace std;
struct node{
	int key;
	struct node *right;
	struct node *left;
};
void preorder(struct node *root){
	if(root == NULL)
	return;
	else
	{
		preorder(root->left);
		cout<<root->key<<" ";
		preorder(root->right);
	}
}
struct node* printTree(int i,int j,int *r,int n)
{
	if(i==j)
	return NULL;
	struct node *root;
	root = (struct node *)malloc(sizeof(struct node));
	root->key = *(r+i*(n+1)+j);
	root->left = printTree(i,root->key -1,r,n);
	root->right = printTree(root->key,j,r,n);
	return root;

}
int main(){
	int n;
	cout<<"enter no. of elements\n"<<endl;
	cin>>n;
	int freq[n];
	cout<<"\nenter frequencies\n"<<endl;
	for(int i=0;i<n;i++){
		cin>>freq[i];
	}
	int p[n+1][n+1];
	int w[n+1][n+1];
	int r[n+1][n+1];
	for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				p[i][j]=0;
				w[i][j]=0;
				r[i][j]=0;
			}
	}
		for(int i=0;i<n;i++){
		p[i][i+1]=freq[i];
		w[i][i+1]=freq[i];
		r[i][i+1]=i+1;
	}
	int i=0,j=2,k=2;
     while(1){
	if(i==1&&j==(n+1))
	break;
	if(j==(n+1))
	{
		i=0;
		j=k+1;
		k++;
	}
	p[i][j]=p[i][j-1]+p[j-1][j];
	int min = INT_MAX;
	int temp;
	int index;
	for(int m=i;m<j;m++){
		temp = w[i][m]+w[m+1][j];
		if(temp<min)
		{index = m;
		min = temp;
	}
	}
	w[i][j]=p[i][j]+min;
	r[i][j]=index+1;
	i++;
	j++;
}
cout<<"\n\nP-matrix is::\n\n";
	for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				cout<<p[i][j]<<" ";
			}
			cout<<"\n";
	}
	cout<<"\n\nWeight_matrix is::\n\n";
	for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				cout<<w[i][j]<<" ";
			}
			cout<<"\n";
	}
		cout<<"\n\nRoot_matrix is::\n\n";
	for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				cout<<r[i][j]<<" ";
			}
			cout<<"\n";
	}
	cout<<"\n\nROOT is::"<<r[0][n]<<endl;
	struct node * root = printTree(0,n,(int *)r,n);
	cout<<"\n\npreorder traversal of BST is::\n\n";
	preorder(root);
}
