#include<bits/stdc++.h>
#include <deque>
#include<iostream>
using namespace std;
int main(){
	int n,m,x,y,t;
	cin>>t;
	list<int> list;
	while(t--){
		long long sumx=0,sumy=0;
		cin>>n>>m>>x>>y;
		int temp;
		for(int i=0;i<n;i++){
			cin>>temp;
			list.push_back(temp);
		}
		int front = list.front();
		std::list<int>::iterator it,et;
	while(m>0){
		int p=list.front();
		list.pop_front();
		int q=list.front();
		if(q==front)
		{
			list.push_back(p);
			m--;
		}
		else{
		int r=p+q;
		list.push_back(p);
		list.push_back(r);
	}
	}
	 et = list.begin();
	 it = list.begin();
	while(x>1){
	sumx =(sumx+(*it))%(1000000007);
	it++;
	x--;
	}
	it = list.begin();
	while(y--){
	sumy =(sumy+(*it))%(1000000007);
	it++;
	}	
	long long sum = (sumy-sumx)%(1000000007);
      cout<<sum<<endl;
	}
}
