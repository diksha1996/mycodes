#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n = s.length();
	//cout<<n<<endl;
	int i,j,k,prev,curr,max=0;
	prev=0;
	for(i=0;i<n;)
	{
		if((i+1)<n&&s[i]=='I'&&s[i+1]=='I')
		{//cout<<"1-------------"<<endl;
			if(prev==0)
			{
				cout<<"12";
				prev=2;
				max=2;
			}
			else
			{
				cout<<max+1;
				max++;
				prev=max;
			}
			i++;
		}
		else if((i+1)<n&&s[i]=='I'&&s[i+1]=='D')
		{
			//cout<<"2-------------"<<endl;
			if(prev==0)
			{
				cout<<"1";
			}
			for(j=i+1;j<n;j++)
			{
				if(s[j]=='I')
				break;
			}
			k=j-i-1;
			max = max+k+1;
			cout<<max;
			prev=max;
			while(k--)
			cout<<(--prev);
			i=j;
		}
		else if(s[i]=='D')
		{
			//cout<<"3-------------"<<endl;
			for(j=i;j<n;j++)
			{
				if(s[j]=='I')
				break;
			}
			k=j-i;
			//cout<<"k=="<<k<<endl;
			max = max+k+1;
			prev=max;
			while(k--)
			cout<<(prev--);
			cout<<"1";
			i=j;
		}
		else
		{
			cout<<max+1;
			i++;
		}
	}
}
