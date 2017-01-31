#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	int n;
	long long a[100001];	
	cin>>t;
	
	while(t--)
	{
		long long last=0;
		long long lastx=0;
		int no_zeroes=0;
		int no_ones=0;
		int no_o = 0;
		int no_x=0;
		int no_xx=0;
		int flag=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i] == 0)
				no_zeroes+=1;
			else if(a[i] == 1)
				no_ones +=1;
			else if(a[i] == -1)
				no_o+=1;
			else if(a[i]>0)
			{				
					no_x+=1;
			}
			else if(a[i]<0)
			{				
					no_xx+=1;
			}				
			
		}			
		if(n==1)
		{
		 	flag=0;			
		}
		else
		{	
				if(no_x >1 || no_xx>1)
					flag =1;
				else if(no_x==1 && no_xx ==1)
					flag =1;
				else if(no_o > 1 && no_ones==0)
					flag =1;
				else if(no_xx ==1 && no_o >0)
					flag=1;
				else
					flag =0;						
			
		}
		if(flag==1)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;	
	}
	return 0;
}
