#include<iostream>
#include<vector>
using namespace std;
int main(){
	int q,n,m,i;
	long long ans=0;
	char ch;
	cin>>q;
	 vector< vector<int> > p(1000001, vector<int>(26, 0)); 
	while(q--){
		cin>>i>>m>>n>>ch;
		if(i==1){
			p[m][ch-97]+=n;
		}
		else
		{
		for(int j=m;j<=n;j++){
			ans= ans+p[j][ch-97];
		}
		cout<<ans<<endl;
		ans=0;	
		}
	}
}
