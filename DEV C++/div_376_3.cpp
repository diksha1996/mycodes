#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k,l,r,ans=0;
	cin>>n>>m>>k;
	int col[n];
	int hash[n];
	for(int i=0;i<n;i++)
	{cin>>col[i];
	hash[i]=0;
	}
	int count=1,c,max;	
	for(int i=0;i<m;i++){
		cin>>l>>r;
		if(hash[l-1]==0&&hash[r-1]==0)
		{
			hash[l-1]=count;
			hash[r-1]=count;
			count++;
		}
		else if(hash[l-1]==0)
		hash[l-1]=hash[r-1];
		else if(hash[r-1]==0)
		hash[r-1]=hash[l-1];		
	}
	int color[k],cl;
	memset(color,0,k);
	for(int i=0;i<count;i++){
		c=0;
		max=INT_MIN;
		for(int j=0;j<n;j++){
			if(hash[j]==count){
				color[col[j]]++;
				if(color[col[j]]>max)
				{
					cl = col[j];
					max = color[col[j]];
				}
				c++;
			}
		}
		ans+=(c-max);
		memset(color,0,k);
	}
	cout<<ans<<endl;
	
}
