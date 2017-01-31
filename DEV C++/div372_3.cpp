#include<iostream>
#include<math.h>
using namespace std;
int isPerfectSquare(double n){
        double b = floor(sqrt(n));
        return b*b < (n*1.0) ? 0:1;
    }
int main(){
    	long long n,k,count;
    	double m;
    	cin>>n;
    	m=2;
    	for(k=1;k<=n;k++){
    		count=0;
    		while(1){
    			m+=k;
    			count++;
    			if(isPerfectSquare(m)&&(((int)sqrt(m))%(k+1)==0))
    			{m = sqrt(m);
    			break;
    		    }
    		}
    		cout<<count<<endl;
    	}
}
