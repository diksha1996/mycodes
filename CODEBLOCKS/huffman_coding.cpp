#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
#include<string.h>
using namespace std;
struct node{
	char *array;
	int freq;
	int count;
};
struct c{
	int *arr;
	int length;
};

bool sort_by_freq( const node & lhs, const node & rhs )
{
   return lhs.freq < rhs.freq;
}
int main(){ 
	int n;
	cout<<"enter no. of symbols"<<endl;
	cin>>n;
	struct node list[n];
	struct c code[256];
	int temp[n];
	cout<<"enter characters and corresponding frequencies"<<endl;
	for(int i=0;i<n;i++){
		cin>>(list[i].array[0])>>(list[i].freq);
		temp[i]=list[i].array[0];
		list[i].count=1;
		code[i].length=0;
	}
	int i=0; 
	while(i<n-1){
	sort((list+i),(list+n),sort_by_freq);
	for(int j=0;j<list[i].count;j++){
		code[list[i].array[j]].arr[code[list[i].array[j]].length]=0;
		(code[list[i].array[j]].length)++;
	}
	for(int j=0;j<list[i+1].count;j++){
		code[list[i+1].array[j]].arr[code[list[i+1].array[j]].length]=1;
		(code[list[i+1].array[j]].length)++;
	}
		list[i+1].freq=list[i].freq+list[i+1].freq;
		for(int k=0;k<list[i].count;k++){
		list[i+1].array[list[i+1].count]=list[i].array[k];
		(list[i+1].count)++;
		}
		i++;
}

	for(int i=0;i<n;i++){
		cout<<temp[i]<<" - ";
	for(int j=code[temp[i]].length-1;j>=0;j++){
		cout<<code[temp[i]].arr[j];
	}
    cout<<"\n";
	}

}
