#include<iostream>
#include<string>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
	int t,flag,n,c,k,max,in,count;
	cin>>t;
	while(t--){
		flag=0;
		cin>>n;
		//cout<<n<<endl;
		int pts[n];
		max = INT_MIN;
		for(int i=0;i<n;i++){
			count=0;
			cin>>c;
			k=0;
			int type[c];
			int hash[6];
			for(int j=0;j<6;j++){
				hash[j]=0;
			}
			for(int j=0;j<c;j++){
				cin>>type[j];
			    hash[type[j]-1]++;
			}
			for(int j=0;j<6;j++){
				if(hash[j]!=0)
				count++;
			}
			cout<<"count "<<count<<endl;
			/*	for(int j=0;j<6;j++){
				cout<<hash[j]<<endl;
			}*/
			pts[i]=c;
			if(count==6)
			{
				k = *min_element(hash,hash+6);
				for(int j=0;j<6;j++){
					hash[j]-=k;
				}
				pts[i] += 4*k;
			count=0;
		}
			int min = INT_MAX;
			for(int j=0;j<6;j++){
				if(hash[j]!=0)
				{
					if(hash[j]<min)
					min = hash[j];
					count++;
				}
			}
			k = min;
		cout<<"k="<<k<<endl;
		    if(count==5)
			{
				//k = *min_element(hash,hash+6);
				//cout<<k<<endl;
				for(int j=0;j<6;j++){
					if(hash[j]!=0)
					hash[j]-=k;
				}
				pts[i] +=2*k;
			    count=0;
			  
		}
		   min  = INT_MAX;
			for(int j=0;j<6;j++){
				if(hash[j]!=0)
				{
				if(hash[j]<min)
					min = hash[j];
					count++;
				}
			}
			k = min;
			cout<<"k="<<k<<endl;
		    if(count==4)
			{
				//	k = *min_element(hash,hash+6);
				for(int j=0;j<6;j++){
					if(hash[j]!=0)
					hash[j]-=k;
				}
				pts[i] +=k;
			}
			cout<<"i "<<pts[i]<<endl;
			if(max<pts[i])
			{
				max = pts[i];
				in = i;
				flag=0;
			}
			else if(max == pts[i])
			{
				flag=1;
			}
			cout<<"m "<<max<<endl;
			cout<<"f "<<flag<<endl;	
			//cout<<pts[i]<<endl;		
			}
			//cout<<in<<endl;
			if(flag == 1)
			cout<<"tie"<<endl;
			else if(in == 0)
			cout<<"chef"<<endl;
			else if(flag==0&&in!=0)
			cout<<(in+1)<<endl;
	}
}
