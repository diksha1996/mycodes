#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		long long x[n],y[n],sx[m],sy[m],dx[m],dy[m];
		double d[n];
		for(int i=0;i<n;i++){
			cin>>x[i]>>y[i];
		}
		for(int i=0;i<m;i++){
			cin>>sx[i]>>sy[i]>>dx[i]>>dy[i];
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				d[j]=((x[j]-sx[i])*(x[j]-sx[i])+(y[j]-sy[i])*(y[j]-sy[i]));
			}
			int k=min_element(d,d+n)-d;
			cout<<(k+1)<<endl;
			x[k]=dx[i];
			y[k]=dy[i];
		}
	}
}
